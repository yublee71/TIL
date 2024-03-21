#include <stdio.h>

int	main()
{
	int	n, i = 0;
	scanf("%d", &n);
	double	score[n], sum = 0, max = 0;
	// can use float instead (float precision up to 7 decimal points. double up to 15 decimal points)
	while (i < n)
	{
		scanf("%lf", &score[i]);
		if (score[i] > max)
			max = score[i];
		i++;
	}
	i = 0;
	while (i < n)
		sum += (score[i++] / max) * 100;
	printf("%lf", sum / n);
}