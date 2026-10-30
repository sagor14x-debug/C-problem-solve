// Post increment and pre increment:
#include <stdio.h>
int main()
{
    int x = 2, y = 3;
    
    x++;
    ++y;

    int z = x + y;

    printf("%d %d %d", x, y, z);
}