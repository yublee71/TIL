#include <stdio.h>

int	main(){
	int num, nummax = 0, i = 0, imax = 0;
	while (i++ < 9)
	{
		scanf("%d", &num);
		if (num > nummax)
		{
			nummax = num;
			imax = i;
		}
	}
	printf("%d\n%d", nummax, imax);
}