#include <stdio.h>
#include <string.h>
void merge(char content1[], char content2[], char combined[]) {
    char* smaller;
    char* larger;
    if (strlen(content1) > strlen(content2)) {
        smaller = content2;
        larger = content1;
    } else {
        smaller = content1;
        larger = content2;
    }
    while (*smaller != '\0') {
            char temp = *content1;
            *combined = temp;
            content1++;
            combined++;

            temp = *content2;
            *combined = temp;
            content2++;
            combined++;

            smaller++;
            larger++;
    }
    while (*larger != '\0') {
        char current1 = *larger;
        *combined = current1;
        combined++;
        larger++;
    }
    *combined = '\0';
}

int main(void) {
    {
        char *content1 = "abcde";
        char *content2 = "12345";
        char combined[100];
        merge(content1, content2, combined);
        printf("Test 1\n");
        printf("Expected:a1b2c3d4e5\n");
        printf("Actual  :%s\n", combined);
        printf("\n");
    }

    {
        char *content1 = "XYZ";
        char *content2 = "12345";
        char combined[100];
        merge(content1, content2, combined);
        printf("Test 2\n");
        printf("Expected:X1Y2Z345\n");
        printf("Actual  :%s\n", combined);
        printf("\n");
    }

    {
        char *content1 = "strawberry";
        char *content2 = "12";
        char combined[100];
        merge(content1, content2, combined);
        printf("Test 3\n");
        printf("Expected:s1t2rawberry\n");
        printf("Actual  :%s\n", combined);
        printf("\n");
    }
    
    {
        char *content1 = "strawberry";
        char *content2 = "";
        char combined[100];
        merge(content1, content2, combined);
        printf("Test 4\n");
        printf("Expected:strawberry\n");
        printf("Actual  :%s\n", combined);
        printf("\n");
    }

    {
        char *content1 = "";
        char *content2 = "durian";
        char combined[100];
        merge(content1, content2, combined);
        printf("Test 5\n");
        printf("Expected:durian\n");
        printf("Actual  :%s\n", combined);
        printf("\n");
    }

        {
        char *content1 = "";
        char *content2 = "";
        char combined[100];
        merge(content1, content2, combined);
        printf("Test 6\n");
        printf("Expected:><\n");
        printf("Actual  :>%s<\n", combined);
        printf("\n");
    }
}