#include <stdio.h>

int	main()
{
	int i, j;
	scanf("%d%d", &i, &j); //works with white space in between the numbers
	printf("%d, %d\n", i, j);
	char a, b;
	scanf("%c%c", &a, &b); //doesn't work with white space in between the characters
	printf("%c, %c", a, b);
}