#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_space(char c)
{
    return (c == ' ' || c == '\t');
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        int f = 0;
        char *str = av[1];
        while(ft_space(str[i]))
            i++;
        while(str[i]) // enquanto n chegar ao fim
        {
            if(ft_space(str[i])) // verific espacos.
                f = 1;
            if(!ft_space(str[i])) //. e enquanto encontrar n espacos
            {
                if(f)// mas , caso o meu f - 1
                    write(1, "   ", 3); // bota 3 espaco.
                f = 0;
                ft_putchar(str[i]); // printa eles
            }
            i++;
        }
    }
    write(1,"\n",1);
    return 0;
}