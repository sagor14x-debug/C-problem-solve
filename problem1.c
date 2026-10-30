// Post increment and pre increment:
#include <stdio.h>

int main() {
    int a = 0, b = 1, c = 2, result;

    result = ++a || ++b && ++c;

    printf("%d %d %d %d", a, b, c, result);

    return 0;
}

