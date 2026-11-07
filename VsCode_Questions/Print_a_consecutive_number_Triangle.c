//Print consecutive positive integers across triangular rows. The numbers continue from where the previous row ended.
#include <stdio.h>

int main() {
    int n = 9;
    int count = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}
