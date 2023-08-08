

#include <stdio.h>
int main(void) {
    int time;
    printf("Enter time in seconds: ");
    scanf("%d", &time);
    int seconds = time % 60;
    int hours = time / 60 / 60;
   // subtract hours and seconds from time and convert to minutes
    int mins = (time - seconds - (hours *60*60))/60;
    printf("%d seconds is: 0%d:%d:%d\n",time, hours, mins, seconds);
}
