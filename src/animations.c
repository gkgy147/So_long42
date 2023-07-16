/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:03:06 by grobert           #+#    #+#             */
/*   Updated: 2023/04/26 13:29:21 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/*void	move_animation(t_game *var)
{
	var->map.player_count++;
}*/

void	unlock_animation(t_game *var)
{
	var->map.exit_count++;
	if (var->map.exit_count == 1)
	{
		put_tile(var, &var->sprite.floor, var->map.exit_x, var->map.exit_y);
		put_tile(var, &var->sprite.break_1, var->map.exit_x, var->map.exit_y);
	}
	if (var->map.exit_count == 1200)
	{
		put_tile(var, &var->sprite.floor, var->map.exit_x, var->map.exit_y);
		put_tile(var, &var->sprite.break_2, var->map.exit_x, var->map.exit_y);
	}
	if (var->map.exit_count == 2400)
	{
		put_tile(var, &var->sprite.floor, var->map.exit_x, var->map.exit_y);
		put_tile(var, &var->sprite.break_3, var->map.exit_x, var->map.exit_y);
	}
	if (var->map.exit_count == 3600)
	{
		put_tile(var, &var->sprite.floor, var->map.exit_x, var->map.exit_y);
		put_tile(var, &var->sprite.unlock, var->map.exit_x, var->map.exit_y);
		var->unlocking = 0;
		var->map.exit_count = 0;
	}
}

void	end_animation(t_game *var)
{
	var->end.n++;
	if (var->end.n == 4000)
		var->end.guy = var->end.bike1;
	if (var->end.n == 8000)
		var->end.guy = var->end.bike2;
	if (var->end.n == 12000)
		var->end.guy = var->end.bike3;
	if (var->end.n == 16000)
		var->end.guy = var->end.bike4;
	if (var->end.n == 20000)
		var->end.guy = var->end.bike5;
	if (var->end.n == 24000)
	{
		var->end.guy = var->end.bike6;
		var->end.n = 0;
	}
	mlx_put_image_to_window(var->mlx, var->victor_win, var->end.guy.img, \
			632, 366);
}
