/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 16:17:22 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/06 20:58:52 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

/*
Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);
*/

int ft_space(char c)
{
    return (c == 32 || c >= 9 && c <= 13);
}

int ft_wlen(char *str)
{
    int i = 0;
    int c = 0;
    while(str[i])
    {
        while(str[i] && ft_space(str[i]))
            i++;
        if(str[i])
        {
            c++;
            while(str[i] && !ft_space(str[i]))
                i++;
        }   
    }
    return c;
}

char    **ft_split(char *str)
{
    char **ar;
    int i = 0;
    int j = 0;
    int f = 1;

    ar = malloc(sizeof(char*) * (ft_wlen(str) + 1)); // alocar espaco no arr
    if(!ar)
        return NULL;
    
    while(str[i]) // pegar cada palvra.
    { 
         // costrucao da palavra;
        while(ft_space(str[i]))
            i++;
        if(str[i])
        {  
            int start = i;
            while(str[i] && !ft_space(str[i]))
                i++;
            int len = i - start;
            ar[j] = malloc(len + 1);
            if(!ar[j]) 
                return NULL;
            // alocacao da palavra;
            int k = 0;
            while(k < len)
            {
                ar[j][k] = str[start + k];
                k++;
            }
            ar[j][k] = '\0';
            j++;    
        }
    }
    ar[j] = NULL;
    return ar;
}

int main()
{
    char *s = "ola mundo tudo bem";
    char **ar = ft_split(s);
    int i = 0;
    while(ar[i])
    {
        printf("%s",ar[i]);
        i++;
    }    
    
    return 0;
}

/*
Podemos dividir o problema em três etapas:

Contar quantas palavras existem → precisamos saber o tamanho do array de ponteiros.
    -- determina o size do nosso array 
            arr = malloc(sizeof(char*) * len + 1);

Alocar memória para cada palavra → malloc para cada string.

Copiar cada palavra para o array → copiar caractere a caractere.
*/