#include <stdio.h>
#include <string.h>

int	main()
{
	int	a[26] = {0};
	char s[101];
	scanf("%s", s);
	int i = strlen(s); // better cause no need to call strlen everytime in while condition
	while (--i >= 0)
		a[s[i]-'a'] = i + 1;
	i = 0;
	while (i < 26)
		printf("%d ", a[i++] - 1);
}