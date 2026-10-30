// Post increment and pre increment:
#include <stdio.h>
int main()
{
    int a = 15;
    int b = 5;

    int c = --a + b--;

    printf("%d %d %d", a, b, c);
}