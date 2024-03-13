#include	<stdio.h>

int	main()
{
	int	n, m, i, j, ball;
	int	basket[100] = {0};
	scanf("%d %d", &n, &m);
	while (m--)
	{
		scanf("%d %d %d", &i, &j, &ball);
		while (i <= j)
			basket[i++ - 1] = ball;
	}
	i = 0;
	while (n--)
		printf("%d ", basket[i++]);
}

/* basket[n] = {0} -> not possible
   variable-sized object may not be initialized*/