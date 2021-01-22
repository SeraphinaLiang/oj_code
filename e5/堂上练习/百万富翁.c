#include <stdio.h>
#include "math.h"

int main() {   int n, m, i;
    scanf("%d", &m);
    for (i = 1; i <= 38; i++) if (0.01 * (pow(2, i - 1) - 1) - i * m >= 0) break;
    printf("%d", i - 1);

    return 0;
}