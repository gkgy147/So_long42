/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:34:21 by grobert           #+#    #+#             */
/*   Updated: 2023/04/24 15:34:43 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include<unistd.h>
# include<stdlib.h>

char	*get_next_line(int fd);
char	*get_strjoin(char *line, const char *box);
int		check_newline(char *box);
size_t	ft_strlen(const char *s);

#endif