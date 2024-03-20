#include <stdio.h>
#include <string.h>

int	main()
{
	char s[1000001];
	int	i = 0, count = 0;
	scanf("%[^\n]s", s);
	while (i < strlen(s))
	{
		if (s[i] != ' ')
			count++;
		while (s[i] != ' ' && s[i])
			i++;
		i++;
	}
	printf("%d", count);
}