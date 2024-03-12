#include <stdio.h>

int	main()
{
	int	n, num, min, max = 0;
	scanf("%d", &n);
	scanf("%d", &num);
	max = num;
	min = num;
	while (--n)
	{
		scanf("%d", &num);
		if (num > max)
			max = num;
		if (num < min)
			min = num;
	}
	printf("%d %d", max, min);
}

/* int	n = 5;
	for (n--)
		printf
	-> 5 times
	for (--n)
		printf
	-> 4 times 
	same goes with while (i++ < 5) vs while(++i < 5)*/