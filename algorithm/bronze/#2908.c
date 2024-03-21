#include <stdio.h>

int	main()
{
	char a[4], b[4];
	int a_flip = 0, b_flip = 0;
	scanf("%s %s", a, b);
	a_flip = (a[0] - '0') + (a[1] - '0') * 10 + (a[2] - '0') * 100;
	b_flip = (b[0] - '0') + (b[1] - '0') * 10 + (b[2] - '0') * 100;
	printf("%d", a_flip > b_flip ? a_flip : b_flip);
}