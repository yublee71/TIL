#include <stdio.h>

int	main()
{
	int	n, re, i = 0;
	char c;
	scanf("%d ", &n);
	while (n--)
	{
		scanf("%d ", &re);
		c = '0';
		while (c != '\n' && c != -1)
		{
			c = getchar();
			i = 0;
			while (i++ < re && c != '\n' && c != -1)
				printf("%c", c);
		}
		printf("\n");
	}
}