#include <stdio.h>

int	main()
{
	int	n, sum = 0;
	scanf("%d ", &n);
	while (n--)
		sum += getchar() - '0';
	printf("%d", sum);
}