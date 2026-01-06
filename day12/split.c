/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 13:01:07 by peazeved          #+#    #+#             */
/*   Updated: 2026/01/03 13:19:11 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

static int is_sep(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

static int count_words(char *str)
{
    int count = 0;
    int i = 0;

    while (str[i])
    {
        while (str[i] && is_sep(str[i])) // encontra o start da palavra(espacos no fim caso tiver)
            i++;
        if (str[i]) // se tiver algo la dentro.
        {
            count++; // conta 1 (1 palavra)
            while (str[i] && !is_sep(str[i])) // pega cada char da palavra ate ao proximo espaco.
                i++;
        }
    }
    return count; // retorna me a palavra.
}

char **ft_split(char *str)
{
    char **res;
    int i = 0;
    int j = 0;
    int start;
    int len; 
 
    res = malloc(sizeof(char *) * (count_words(str) + 1)); // malloc do array.
    if (!res)
        return NULL; // condicao de segurnaca.

    while (str[i]) // enquanto n chegar ate ao fim.
    {
        while (str[i] && is_sep(str[i])) // ? percorre ate encontrar o primeiro espaco.
            i++;
        if (str[i]) // incio da palavra ( onde is_sep parou)
        {
            start = i; // meu comeco (novamente ??)
            while (str[i] && !is_sep(str[i])) // enquanto for chars.
                i++; // 1+
            len = i - start; // o inicio da palavra + o meu ultimo chat (antes de sep).

            res[j] = malloc(len + 1); //aloca len de uma palvra dentro do array.
            if (!res[j])
                return NULL; // condicao de segurnaca/

            int k = 0; // indeix da palavra dentro do array (pos)
            while(k < len) // enquanto n chegar ao len da palavra.
            {
                res[j][k] = str[start + k];//Copio a palavra j, letra a letra, a partir do índice start da string original
                k++;
            }
            res[j][len] = '\0'; // associar um "null"--fim do array. (de cada palavra.)
            j++;
        }
    }
    res[j] = NULL; // FINAL OFICIAL DO ARRAY.
    return res;
}