#include <stdio.h>

int main() {
    int i, j, k, n = 5;

    for (i = n; i >= 1; i--) {
        
        for (j = 1; j < i; j++)
            printf("  ");

        for (k = i; k <= n; k++)
            printf("%d ", k);

        for (k = n - 1; k >= i; k--)
            printf("%d ", k);

        printf("\n");
    }
    
    return 0;
}
