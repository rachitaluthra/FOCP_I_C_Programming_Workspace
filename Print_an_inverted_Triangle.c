//Given n print a left alligned inverted triangle. The first row contains n asterisks; each following row contains one fewer.
#include <stdio.h>

int main(){
    int n = 10;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (n - i + 1); j++){
            printf("*");
        }
        printf("\n");
    }
}   