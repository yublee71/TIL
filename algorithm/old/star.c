#include <stdio.h>

int    main(void)
{
    int	n;
    int	i;
	int	j;	

    scanf("%d", &n);
    while (i++ < n)
    {
        while (j++ < i)
            printf("*");
		j = 0;
        printf("\n");
    }
}
