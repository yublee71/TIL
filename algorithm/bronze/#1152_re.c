#include <stdio.h>
#include <string.h>

int	main()
{
	char s[1000001];
	int	i = 0, count = 0, len;
    len = read(0, s, 1000001);
	s[len - 1] = 0;
	while (s[i])
	{
		if (s[i] == ' ')
			i++;
		else
		{
			count++;
			while (s[i] != ' ' && s[i])
				i++;
		}
	}
	printf("%d", count);
}