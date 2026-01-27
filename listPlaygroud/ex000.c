/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex000.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 14:57:39 by peazeved          #+#    #+#             */
/*   Updated: 2025/08/25 15:24:54 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    #include "struct.h"


    int ft_cmp(int a, int b)
    {
        return a - b;
    }

    void swap(int *a , int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    void ft_sort(int size, int arr[])
    {
        int i = 0;
        int j = 0;

        while(i < size - 1)
        {
            j = 0;
            while(j < size - (i + 1))
            {
                if(ft_cmp(arr[j], arr[j + 1]) > 0)
                {
                    swap(&arr[j], &arr[j + 1]);
                }
                j++;
            }
            i++;
        }
    }


    int main()
    {
        int arr[5] ={5, 2, 9, 1, 3};
        int size = 5;
        int i = 0;
    
        while(i < 5)
        printf("%i,", arr[i++]);
        printf("\n");
        i = 0;
        ft_sort(5, arr);
        while(i < 5)
        printf("%i,", arr[i++]);
        return 0;
    }