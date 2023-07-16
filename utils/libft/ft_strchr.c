/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:37:04 by grobert           #+#    #+#             */
/*   Updated: 2023/04/26 13:35:59 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

//	Returns a pointer to the first occurrence of the character 'c'
//	in the string 's'

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (0);
}
