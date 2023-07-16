/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:36:41 by grobert           #+#    #+#             */
/*   Updated: 2023/04/26 13:35:43 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

//	Returns the number of bytes in the integer 'x'

size_t	ft_intsize(int x)
{
	size_t	count;

	count = 0;
	if (x <= 0)
		count++;
	while (x)
	{
		x = x / 10;
		count++;
	}
	return (count);
}

//	Returns a string representing the integer received as an argument

char	*ft_itoa(int n)
{
	char		*s;
	long int	nb;
	int			i;

	nb = (long)n;
	i = ft_intsize(nb);
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (0);
	s[i] = '\0';
	if (nb == 0)
		s[0] = '0';
	if (nb < 0)
	{
		s[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		s[--i] = '0' + (nb % 10);
		nb = nb / 10;
	}
	return (s);
}
