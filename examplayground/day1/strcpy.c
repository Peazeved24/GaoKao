#include <stdio.h>


char *ft_strcpy(char *dst, const char *src)
{
    if(!dst || !src)
        return NULL;
    int i = 0;

    while(src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
}

int main()
{
    const char a[100] = "ola";
    char b[100] = "";
    char *result =  ft_strcpy(b, a);
    printf("%s", b);
    return 0;
}