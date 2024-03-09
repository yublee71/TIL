#include <stdio.h>

int main (void)
{
    int    n;
    int    i = 1;
	int    result = 1;
    scanf("%d", &n);
    while(n--)
        result = result * i++;
    printf("%d", result);
}
