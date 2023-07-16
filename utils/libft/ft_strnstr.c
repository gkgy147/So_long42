/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:37:29 by grobert           #+#    #+#             */
/*   Updated: 2023/04/26 13:36:14 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

//	Locates the first occurrence of the string 'lil' in the string 'big'
//	No more than 'n' characters are searched

char	*ft_strnstr(const char *big, const char *lil, size_t n)
{
	size_t	b;
	size_t	l;

	b = 0;
	if (!lil[0])
		return ((char *)big);
	if ((int)n < 0)
		n = ft_strlen(big);
	while (big[b] && b < n)
	{
		l = 0;
		while (big[b] != lil[l])
			b++;
		while (big[b + l] && big[b + l] == lil[l] && b + l < n)
		{
			if (lil[l + 1] == '\0')
				return ((char *)big + (b));
			l++;
		}
		b++;
	}
	return (0);
}
