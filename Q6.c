#include <stdio.h>

int main() {
    int n = 5, i, j;

    for (i = 1; i <= n; i++) {
        // Print increasing sequence
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print spaces
        for (j = 1; j <= 2 * (n - i); j++) {
            printf("  ");
        }

        // Print decreasing sequence
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
