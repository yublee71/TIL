#include <stdio.h>

int	main()
{
	int	n, sum = 0;
	char c;
	scanf("%d ", &n);
	while (n--)
	{
		scanf("%c", &c);
		sum += c - '0';
	}
	printf("%d", sum);
}