#include <stdio.h>

int	main()
{
	int		i;
	char	str[1000];
	scanf("%s %d", str, &i);
	printf("%c", str[i - 1]);
}

/*
	scanf("%s", str);
	scanf("%d", &i);
	==
	scanf("%s %d", str, &i);
	because first argument can include whitespace
*/