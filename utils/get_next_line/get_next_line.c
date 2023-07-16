/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:32:25 by grobert           #+#    #+#             */
/*   Updated: 2023/04/26 13:31:34 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	box[BUFFER_SIZE + 1];
	char		*line;
	int			i;

	i = 0;
	if (read(fd, NULL, 0) < 0)
	{
		while (box[i])
			box[i++] = 0;
		return (NULL);
	}
	line = NULL;
	while (box[0] || read(fd, box, BUFFER_SIZE))
	{
		line = get_strjoin(line, box);
		if (check_newline(box))
			break ;
	}
	return (line);
}
