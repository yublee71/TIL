#include <stdio.h>

int    main(void)
{
    int    n, a, b;
    int    i = 0;
    
    scanf("%d", &n);
    while (i < n)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", ++i, a + b);
    }
}