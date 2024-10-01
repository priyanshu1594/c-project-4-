#include <stdio.h>

int main() {
    int i, j, n = 5;

    for (i = 1; i <= n; i++) {
        if (i == 1 || i == 3) {
            for (j = 1; j <= n; j++) {
                printf("* ");
            }
        } 
        else if (i == 2) {
            for (j = 1; j <= n; j++) {
                if (j == 1 || j == n)
                    printf("* ");
                else
                    printf("  ");
            }
        } 
        else {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
