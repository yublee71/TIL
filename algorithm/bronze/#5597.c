#include <stdio.h>

int	main()
{
	int	n = 28;
	int	student[30] = {0};
	int	attend, i = 0;
	while (n--)
	{
		scanf("%d", &attend);
		student[--attend] = 1;
	}
	while (i < 30)
		student[i++] ? 0 : printf("%d\n", i);
}