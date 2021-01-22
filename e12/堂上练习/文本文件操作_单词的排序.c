#include "stdio.h"
#include "string.h"

main()
{
FILE *fp1, *fp2;
    char str[10000][10], str1[10];
    int n = 0, i, j;
    if ((fp1 = fopen("case1.in", "r")) == NULL) return 0;
    if ((fp2 = fopen("answer.txt", "w")) == NULL) return 0;
    while (fscanf(fp1, "%s", str[n]) > 0) n++;
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(str1, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], str1);
            };
        }
    for (i = 0; i < n; i++) fprintf(fp2, "%s\n", str[i]);
    fclose(fp1);
    fclose(fp2);
}
