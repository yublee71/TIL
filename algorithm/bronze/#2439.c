#include <stdio.h>

int    main(void)
{
    int    n;
    int    i, j = 0;
    scanf("%d", &n);
    while (i++ < n)
    {
        j = n - i;
        while (j--)
            printf(" ");
        while (++j < i)
            printf("*");
		printf("\n");
    }
}