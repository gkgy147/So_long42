/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:45:21 by grobert           #+#    #+#             */
/*   Updated: 2023/04/26 13:28:38 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_game	var;

	if (argc != 2)
		put_error(0, &var);
	get_map(&var, argv[1]);
	var.mlx = mlx_init();
	if (!var.mlx)
		return (put_error(8, &var));
	var.win = mlx_new_window(var.mlx, var.win_width, var.win_height, "Pokemon");
	if (!var.win)
		put_error(9, &var);
	game_init(&var);
	mlx_set_font(var.mlx, var.win, \
		"-schumacher-clean-bold-r-normal--12-120-75-75-c-80-iso646.1991-irv");
	mlx_hook(var.win, 2, 1L << 0, keypress, &var);
	mlx_hook(var.win, 17, 0L, destruct, &var);
	mlx_loop_hook(var.mlx, render_frame, &var);
	mlx_loop(var.mlx);
}
