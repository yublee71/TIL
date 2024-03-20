#include <stdio.h>

int	main()
{
	int	n, re, i = 0, j = 0;
	char s[21];
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d %s", &re, s);
		i = 0;
		while (s[i])
		{
			j = 0;
			while (j++ < re)
				printf("%c", s[i]);
			i++;
		}
		printf("\n");
	}
}