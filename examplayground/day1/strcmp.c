#include <stdio.h>
#include <string.h>

int ft_strcmp(const char *s1, const char *s2)
{
    if(!s1 || !s2)
        return 1;
    int i = 0;
    int j = 0;

    while(s1[i] && s2[j])
    {
        if(s1[i] != s2[j])
            return s1[i] - s2[j];
        i++;
        j++;
    }
    return 0;
}

int main()
{
    char s1[] = "ola";
    char s2[] = "ola";
    printf("%i", ft_strcmp(s1, s2));
    return 0;
}