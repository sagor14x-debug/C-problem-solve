#include <stdio.h>

int main() {
    int a;

    printf("Input the amount: ");
    scanf("%d", &a);

    int result1 = a / 100;
    a = a % 100;

    int result2 = a / 50;
    a = a % 50;

    int result3 = a / 20;
    a = a % 20;

    int result4 = a / 10;
    a = a % 10;

    int result5 = a / 5;
    a = a % 5;

    int result6 = a / 2;
    a = a % 2;

    int result7 = a / 1;
    a = a % 1;

    printf("There are:\n");
    printf("%d Note(s) of 100.00\n", result1);
    printf("%d Note(s) of 50.00\n", result2);
    printf("%d Note(s) of 20.00\n", result3);
    printf("%d Note(s) of 10.00\n", result4);
    printf("%d Note(s) of 5.00\n", result5);
    printf("%d Note(s) of 2.00\n", result6);
    printf("%d Note(s) of 1.00\n", result7);

    return 0;
}