#include <stdio.h>

int ft_isalpha(int c)
{
    return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}
int main()
{
    char c = 'a';
    printf("%i", ft_isalpha(c));
    return 0;
}