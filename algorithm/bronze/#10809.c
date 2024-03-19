#include <stdio.h>
#include <string.h>

int	main()
{
	char s[101];
	char c = 'a';
	int i = 0;
	scanf("%s", s);
	while (c <= 'z')
	{
		i = 0;
		while (s[i])
		{
			if (s[i] == c)
			{
				printf("%d ", i);
				break;
			}
			i++;
		}
		if (i == strlen(s))
			printf("-1 ");
		c++;
	}
}