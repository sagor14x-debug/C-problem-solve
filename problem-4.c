// Post increment and pre increment:
#include <stdio.h>
int main()
{
    int a = 4;
    int b = a++ + 2;

    int c = ++a + b;

    printf("%d %d %d", a, b, c);
}