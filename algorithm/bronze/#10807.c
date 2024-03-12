#include <stdio.h>

int	main(void){
	int	n, v;
	int	i, count = 0;
	scanf("%d", &n);
	int	numbers[n];
	while (i < n)
		scanf("%d", &numbers[i++]);
	scanf("%d", &v);
	i = 0;
	while (i < n)
		if (numbers[i++] == v)
			count++;
	printf("%d", count);
}