#include <stdio.h>

int	main()
{
	int	n, x, i,a = 0;
	scanf("%d %d", &n, &x);
	while (n--)
	{
		scanf("%d", &a);
		if (a < x)
			printf("%d ", a);
	}
}