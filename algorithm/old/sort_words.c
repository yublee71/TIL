#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void qsort (void *base, size_t nel, size_t width, int (*compare)(const void *, const void *));

int	compare(const void *str1, const void *str2)
{
	int	len = 0;
	int	dic = 0;

	len = (int)strlen(*(char **)str1) - (int)strlen(*(char **)str2);
	if (len > 0)
		return (1);
	else if (len == 0)
	{
		dic = strcmp(*(char **)str1, *(char **)str2);
		if (dic > 0)
			return (1);
		else if (dic == 0)
			return (0);
	}
	return (-1);
}

int	main()
{
    int		n, i= 0;
    scanf("%d", &n);
    char	*words[n];
	char	temp[50];
    while (i < n)
	{
		scanf("%s", temp);
		words[i++] = strdup(temp);
	}
	qsort((void *)words, n, sizeof(char*), compare);
	i = 0;
	while (i < n)
	{
		while (i + 1 < n && strcmp(words[i], words[i + 1]) == 0)
			i++;
		printf("%s\n", words[i++]);
	}
}