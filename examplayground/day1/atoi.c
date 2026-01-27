#include <stdio.h>

int ft_atoi(const char *str)
{
    int n = 0;
    int s = 1;

    while(*str == ' ' || *str == '\t')
        str++;
    if(*str == '+' || *str == '-')
    {
        if(*str == '-')
            s = -1;
        str++;
    }
    while(*str >= '0' && *str <= '9')
        n = n * 10 + (*str++ - '0');
    return (n * s);
}
int main()
{
    char *str = "+123";
    printf("%i", ft_atoi(str));
    return 0;
}