#include <stdio.h>

int    main(void)
{
    int	a = 1;
	int	b = 1;
    while (1)
    {
        scanf("%d %d", &a, &b);
		if (!a && !b)
			return;
       	printf("%d\n", a + b);
    }
}
