#include <stdio.h>
#include <string.h>
void py_slice(char orig[], char dest[], int start, int end, int step) {
    char *ptr = dest;
    if (start > strlen(orig)-1) {
        start = strlen(orig)-1;
    }
    if (end > strlen (orig)) {
        end = strlen(orig);
    }
    char *startptr = &(orig[start]);
    char *endptr = orig + end;
    if (startptr == endptr) {
        return;
    }
    if (startptr > endptr && step<0) {
        while(startptr > endptr) {
            *dest = *startptr;
            startptr = startptr + step;
            if (*dest != '\0') {
                dest++;
            }
        } 
    }else if(startptr < endptr && step > 0){
        while(endptr > startptr) {
            *dest = *startptr;
            startptr = startptr + step;
            if (*dest != '\0') {
                dest++;
            }
        
        } 
    }
    *dest = '\0';
    dest = ptr;
    
    
}


int main(void) {
    {
        char orig[] = "ABCDEFGHIJ";
        char dest[11];
        py_slice(orig, dest, 1, 3, 1);
        printf("Test 1\n");
        printf("Expected:BC\n");
        printf("Actual  :%s\n", dest);
        printf("\n");
    }

    {
        char orig[] = "ABCDEFGHIJ";
        char dest[11];
        py_slice(orig, dest, 0, 9, 1);
        printf("Test 2\n");
        printf("Expected:ABCDEFGHI\n");
        printf("Actual  :%s\n", dest);
        printf("\n");
    }

    {
        char orig[] = "ABCDEFGHIJ";
        char dest[11];
        py_slice(orig, dest, 0, 11, 1);
        printf("Test 3\n");
        printf("Expected:ABCDEFGHIJ\n");
        printf("Actual  :%s\n", dest);
        printf("\n");
    }

    {
        char orig[] = "ABCDEFGHIJ";
        char dest[11];
        py_slice(orig, dest, 0, 10, 2);
        printf("Test 4\n");
        printf("Expected:ACEGI\n");
        printf("Actual  :%s\n", dest);
        printf("\n");
    }

    {
        char orig[] = "ABCDEFGHIJ";
        char dest[11];
        py_slice(orig, dest, 0, 10, -2);
        printf("Test 5\n");
        printf("Expected:><\n");
        printf("Actual  :>%s<\n", dest);
        printf("\n");
    }

    {
        char orig[] = "ABCDEFGHIJ";
        char dest[11];
        py_slice(orig, dest, 10, 2, -2);
        printf("Test 6\n");
        printf("Expected:JHFD\n");
        printf("Actual  :%s\n", dest);
        printf("\n");
    }

    {
        char orig[] = "ABCDEFGHIJ";
        char dest[11];
        py_slice(orig, dest, 10, 2, 0);
        printf("Test 6\n");
        printf("Expected:><\n");
        printf("Actual  :>%s<\n", dest);
        printf("\n");
    }
    
    {
        char orig[] = "ABCDEFGHIJ";
        char dest[11];
        py_slice(orig, dest, 7, 2, -3);
        printf("Test 6\n");
        printf("Expected:HE\n");
        printf("Actual  :%s\n", dest);
        printf("\n");
    }
}
