#include <stdio.h>
#include <string.h>

int	main()
{
	char s[101]; // consider \n
	scanf("%s", s);
	printf("%d", (int)strlen(s));
}