//Print a pyramid with n rows. Each row contains an odd number of stars: 1, 3, 5, 7, etc.

#include <stdio.h>

int main() {
    int n = 10;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
