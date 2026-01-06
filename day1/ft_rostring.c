#
/*#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_space(char c)
{
    return (c == ' ' || c == '\t');
}

int get_word(char *str)
{
    int i = 0;
    while (str[i] && !ft_space(str[i]))
        i++;
    return i;
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        char *str = av[1];
        int s = 0;
        int f = 0;

        // pular espaços iniciais
        while (ft_space(str[s]))
            s++;

        // pegar comprimento da primeira palavra
        int wordlen = get_word(str + s);

        // copiar a primeira palavra
        char *word = malloc(wordlen + 1);
        if (!word)
            return 1;

        for (int i = 0; i < wordlen; i++)
            word[i] = str[s + i];
        word[wordlen] = '\0';

        // começar depois da primeira palavra
        int st = s + wordlen;

        // pular espaços entre a 1ª palavra e o resto
        while (ft_space(str[st]))
            st++;

        // imprimir o resto da frase
        while (str[st])
        {
            if (ft_space(str[st]))
            {
                if (!f)
                {
                    ft_putchar(' ');
                    f = 1;
                }
            }
            else
            {
                ft_putchar(str[st]);
                f = 0;
            }
            st++;
        }

        // se ainda existe resto, imprimir espaço antes da 1ª palavra
        if (st > s + wordlen)
            ft_putchar(' ');

        // imprimir a primeira palavra no final
        for (int i = 0; i < wordlen; i++)
            ft_putchar(word[i]);

        free(word);
    }
    ft_putchar('\n');
    return 0;
}*/
