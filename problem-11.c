// write a C program to convert specified days into years, weeks and days.
#include <stdio.h>
int main()
{
    int a = 375;
    int result1 = a / 365;
    int remainingDays = a % 365;

    int result2 = remainingDays / 7;
    int result3 = remainingDays % 7;

    printf("Years -> %d\n", result1);
    printf("Weeks -> %d\n", result2);
    printf("Days -> %d\n", result3);

    // int result1 = 375 / 365;
    // int result2 = 10 / 7;
    // int result3 = 3;

    // printf("1 year -> %d \n", result1);
    // printf("1 week ->%d \n", result2);
    // printf("days ->%d", result3);

    return 0;
}