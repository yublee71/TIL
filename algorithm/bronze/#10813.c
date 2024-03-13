#include <stdio.h>

int	main()
{
	int	 n, m, i, j, k = 0, tmp = 0;
	scanf("%d %d", &n, &m);
	int	basket[n + 1];
	while (k <= n)
	{
		basket[k] = k;
		k++;
	}
	while (m--)
	{
		scanf("%d %d", &i, &j);
		tmp = basket[i];
		basket[i] = basket[j];
		basket[j] = tmp;
	}
	k = 1;
	while (n--)
		printf("%d ", basket[k++]);
}

/* to use index ranging from 1 to n,
   declare array with a size of n + 1, not n*/