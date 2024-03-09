#include <stdio.h>
#include <string.h>

int    main()
{
    char    s[100];
    size_t    i = 0;
    int    result = 0;
    scanf("%s", s);
    while (s[i] == s[strlen(s) - i - 1] && i < strlen(s) / 2)
        i++;
    if (i == (strlen(s) / 2))
        result = 1;
    printf("%d", result);
}