//Print an n × n hollow square. Stars should appear only on the boundary. The inside should contain spaces.

#include <stdio.h>

int main() {
    int n = 9;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}