#include <stdio.h>

int    main()
{
    int    n;
    
    scanf("%d", &n);
    while (n)
    {
        printf("long ");
        n -= 4; 
    }
    printf("int");
}