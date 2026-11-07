//Given n print a left alligned triangle. Row i must contain exactly i asterisks, for i from 1 to n.
#include <stdio.h>
int main() {
    int n = 10;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
