#include <stdio.h>


void  ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}


int main()
{
    int a = 10;
    int b = 9;
    
    ft_swap(&a, &b);
    printf("%i\n%i\n", a, b);
    return 0;
}