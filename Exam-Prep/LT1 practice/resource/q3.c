/*
   Name :
   Email:
 */
 
 #include <stdio.h>


void print_season(int day, int month) {
    if (day <=0 || month <= 0) {
        printf("invalid\n");
    } else if ((month == 1 ||month == 3 ||month == 5 ||month == 7 ||month == 8 ||month == 10 ||month == 12) && (day > 31)) {
        printf("invalid\n");
    } else if ((month == 4 ||month == 6 ||month == 9 ||month == 11) && (day > 30)) {
        printf("invalid\n");
    } else if (month == 2 && day < 28) {
        printf("invalid\n");
    }

    if ((day >= 20 && month == 3) || (month >=4 && month <=5) || (day <= 20 && month == 6)) {
        printf("spring\n");
    } else if ((day >= 21 && month == 6) || (month >=7 && month <=8)|| (day <= 22 && month == 9)) {
        printf("summer\n");
    } else if ((day >= 23 && month == 9) || (month >=10 && month <=11) || (day <= 21 && month == 12)) {
        printf("fall\n");
    } else {
        printf("winter\n");
    }
}

int main(void) {
    {
        printf("Test 1\n");
        printf("Expected:spring\n");
        printf("Actual  :");
        print_season(5, 5);
        printf("\n");
    }

    {
        printf("Test 2\n");
        printf("Expected:summer\n");
        printf("Actual  :");
        print_season(5, 7);
        printf("\n");
    }

    {
        printf("Test 3\n");
        printf("Expected:fall\n");
        printf("Actual  :");
        print_season(5, 11);
        printf("\n");
    }

    {
        printf("Test 4\n");
        printf("Expected:winter\n");
        printf("Actual  :");
        print_season(5, 1);
        printf("\n");
    }

    {
        printf("Test 5\n");
        printf("Expected:invalid\n");
        printf("Actual  :");
        print_season(1, 13);
        printf("\n");
    }

    {
        printf("Test 6\n");
        printf("Expected:invalid\n");
        printf("Actual  :");
        print_season(31, 4);
        printf("\n");
    }

    {
        printf("Test 7\n");
        printf("Expected:invalid\n");
        printf("Actual  :");
        print_season(-1, 4);
        printf("\n");
    }
}
