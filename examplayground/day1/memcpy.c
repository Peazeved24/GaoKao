#include <stdio.h>
#include <string.h>


void *ft_memcpy(void *dst, const void *src, size_t n)
{
    int i = 0;
    char *char_dest = (char*)dst;
    char *char_src = (char*)src;

    while(i < n)
    {
        char_dest[i] = char_src[i];
        i++;
    }
    return dst;
}

int main()
{
    int a = 9; 
    int b  = 10;
    
    printf("Value of b before calling memcpy: %d\n", b);
    ft_memcpy(&b, &a, sizeof(int));
    printf("b = %d", b);
    return 0;
}