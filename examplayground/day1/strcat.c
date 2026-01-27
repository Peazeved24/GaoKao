#include <stdio.h>
#include <stdlib.h>

char *ft_strcat(char *dst, const char *src)
{
    int i = 0;
    int j = 0;

    while(dst[i])
        i++;
    while(src[j])
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return dst;
}


int main()
{
    const char a[] = " tudo bem?";
    char b[50] = " ola mundo";
    char *str = ft_strcat(b ,a);
    printf("%s", str);
    return 0;
}