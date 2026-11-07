//Given a positive integer n, print a square containing n rows and n columns od asterisks(*). Do not print spaces between asterisks
#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
