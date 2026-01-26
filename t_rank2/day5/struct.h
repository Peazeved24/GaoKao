/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:52:20 by peazeved          #+#    #+#             */
/*   Updated: 2025/12/26 18:17:44 by peazeved         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
#define STRUCT_H


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#endif