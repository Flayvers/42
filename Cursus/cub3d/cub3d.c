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
	void		*mlx;
    t_window 	*win;

    printf("0");
    mlx = mlx_init();
    printf("1");
    //win->set_name = av[1];
    printf("2");
    //parser(win);
    printf("3");
    win->mlx_win = mlx_new_window(mlx, win->heigh, win->width, "Cub3D");
    mlx_loop(mlx);
    return(0);
} 
