#include <stdio.h>

int    main(void)
{
    int    a, b;
    scanf("%d %d", &a, &b);
    int    result = a * b;
    {
        while (b)
        {
            printf("%d\n", a * (b % 10));
            b /= 10;
        }
        printf("%d", result);
    }
}
