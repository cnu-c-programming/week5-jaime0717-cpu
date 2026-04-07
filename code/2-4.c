#include <stdio.h>

long my_strtol(char *str, char **endtr)
{
    long res = 0;

    while (47 < *str && *str < 58)
    {
        res *= 10;
        res += *str-'0';
        str++;
    }

    *endtr = str;

    return res;
}

int main()
{
    char str[] = "2026hello";
    char *end;

    long val = my_strtol(str, &end);

    printf("%ld %s\n", val, end);
    return 0;
}