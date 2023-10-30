#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // 是闰年
    } else {
        return 0; // 不是闰年
    }
}

int main() {
    int year;

    scanf("%d", &year);

    if (isLeapYear(year)) {
        printf("yes");
    } else {
        printf("no");
    }

    return 0;
}

