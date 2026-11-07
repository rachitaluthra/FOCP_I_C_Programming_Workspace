//Given n, print n rows. On Row i, print integers from 1 through i, seperated by one space.
#include <stdio.h>

int main() {
    int n = 10;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}