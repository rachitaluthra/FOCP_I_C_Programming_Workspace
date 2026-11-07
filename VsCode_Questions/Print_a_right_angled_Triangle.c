#include <stdio.h>

int main()
{
    int n = 10;
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
