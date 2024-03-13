#include <stdio.h>

int	main()
{
	int	numbers[10], number;
	int	i = 0, j = 0, count = 0;
	while (i < 10)
	{
		scanf("%d", &number);
		numbers[i++] = number % 42;	
	}
	i = 0;
	while (i < 42)
	{
		j = 0;
		while (j < 10)
		{
			if (i == numbers[j])
			{
				count++;
				break;
			}
			j++;
		}
		i++;
	}
	printf("%d", count);
}