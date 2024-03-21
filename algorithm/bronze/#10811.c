#include <stdio.h>

int	main(){
	int	n, m, i, j, tmp = 0;
	scanf("%d %d", &n, &m);
	int	basket[n];
	for (int i = 0; i < n; i++) // new i created (different from i outside of the loop)
		basket[i] = i + 1;
	while (m--)
	{
		scanf("%d %d", &i, &j);
		while (i < j)
		{
			tmp = basket[i - 1];
			basket[i - 1] = basket[j - 1];
			basket[j - 1] = tmp;
			i++;
			j--;
		}
	}
	for (int i = 0; i < n; i++)
		printf("%d ", basket[i]);
}