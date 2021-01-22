#include <stdio.h>
#include <stdlib.h>
#include "math.h"

int main() { int n, i, j, k, h;
    scanf("%d", &n);
    for (i = -n + 1; i <= n - 1; i++) {
        for (j = 0; j < abs(i); j++) printf(" ");
        for (k = 1; k <= n - abs(i); k++) printf("%d", k);
        for (h = n - abs(i) - 1; h >= 1; h--) printf("%d", h);
        printf("\n");
    }


    return 0;
}