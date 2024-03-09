#include <stdio.h>

int    main(void)
{
    int    n, a, b;
    
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
}

/*  while(n--) vs for(int i; i < n; i++)
    don't show much time difference */