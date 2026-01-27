#include <stdio.h>
#include <stdlib.h>

int ft_strlen(const char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}

char *ft_strdup(const char *s)
{
    if(!s)
        return NULL;
    int i =0;
    char *str = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if(!str)
        return NULL;
    while(s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return str;
}

int main()
{
    char *str = "ola mundo";
    char *b = ft_strdup(str);
    printf("%s", b);
    free(b);
    return 0;
}