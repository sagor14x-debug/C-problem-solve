// Post decrement and pre decrement:
#include <stdio.h>
int main()
{
    int a = 8;
    int b = --a;
    int c = a--;

    printf("%d %d %d", a, b, c);
}