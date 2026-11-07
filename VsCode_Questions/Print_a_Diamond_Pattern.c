#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    /* upper half including the widest row */
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            putchar(' ');
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    /* lower half */
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            putchar(' ');
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
