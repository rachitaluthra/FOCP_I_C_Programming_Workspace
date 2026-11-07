//Print an inverted pyramid. The first row has the maximum number of stars, and every next row has two fewer stars and one additional leading space.

#include <stdio.h>

int main() {
    int n = 10;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i - 1; j++) {
            printf(" ");
        }

        for (int j = 1; j <= 2 * (n - i) + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
