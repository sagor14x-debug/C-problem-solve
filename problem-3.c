// Post increment and pre increment:
#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;

    a++;
    b++;

    int c = ++a + b++;

    printf("%d %d %d", a, b, c);
}