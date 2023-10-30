#include <stdio.h>

int main() {
    int day;
    scanf("%d", &day);
    if (day==1) {
        printf("Monday");
        return 0;
    }
    if (day==2) {
        printf("Tuesday");
        return 0;
    }
    if (day==3) {
        printf("Wednesday");
        return 0;
    }
    if (day==4) {
        printf("Thursday");
        return 0;
    }
    if (day==5) {
        printf("Friday");
        return 0;
    }
    if (day==6) {
        printf("Saturday");
        return 0;
    }
    if (day==7) {
        printf("Sunday");
        return 0;
    }
    printf("Input Error")
}
