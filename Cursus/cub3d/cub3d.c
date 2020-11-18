/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 10:10:44 by rchallie          #+#    #+#             */
/*   Updated: 2020/01/17 09:03:45 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/cub3d.h"

int				main(int ac, char **av)
{


    t_window 	*win;

    /*win->set_name = av[1];
    parser(win);
    win->mlx_ptr = mlx_init();
    win->mlx_win = mlx_new_window(win->mlx_ptr, win->heigh, win->width, "Cub3D");
    mlx_loop(win->mlx_ptr);

    return(0);*/
    parser(win);
    printf("heigh%d\nwidth%d", win->heigh, win-width);
} 
