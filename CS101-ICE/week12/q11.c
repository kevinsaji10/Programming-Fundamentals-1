#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void email_checker() {
    bool valid = false;
    while(!valid) {
        char email[100];
        printf("Enter email here: ");
        scanf("%s", email);
        // to find number of @
        int count = 0;
        for (int i = 0; i< strlen(email); i++) {
            if (email[i] == '@') {
                count++;
            }
        }
        // check if @smu.edu.sg is present and number of @ is 1
        if (strstr(email, "@smu.edu.sg")!=NULL && count == 1) {
            char*ptr = strstr(email, "@smu.edu.sg");
            // check of @smu.edu.sg is at the back and there is a username before it
            if (*(ptr+11) == '\0' && *ptr != email[0]) {
                printf("Valid!\n");
                return;
            }
        }
        printf("Invalid!\n");
    }
    

}
int main(void) {
    email_checker();
}