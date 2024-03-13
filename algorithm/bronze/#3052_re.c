#include <stdio.h>

int	main()
{
	int	number, n = 10, count = 0;
	int	r[42] = {0};
	while (n--)
	{
		scanf("%d", &number);
		r[number % 42]++ ? : count++;
	}
	printf("%d", count);
}