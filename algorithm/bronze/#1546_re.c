#include <stdio.h>

int	main()
{
	int	n, a, sum = 0, max = 0;
	scanf("%d", &n);
	for (int i; i < n; i++)
	{
		scanf("%d", &a);
		sum += a > max ? max=a : a;
	}
	printf("%f", sum*100./max/n);
}