#include <stdio.h>
#include <string.h>

int    main(void)
{
    char    s[1000000];
    size_t    len;
    size_t    i, j = 0;
    scanf("%s", s);
    len = strlen(s);
    int    count[len];
    while (s[i])
    {
        while (j < len)
            if (s[i] == s[j++])
                count[i]++;
        i++;
        j = 0;
    }
    i = 0;
    while (count[i] == count[i + 1] && i + 1 < len)
        i++;
    if (i + 1 == len)
        printf("\?");
}