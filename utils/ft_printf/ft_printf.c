/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <georgerobert147@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:25:43 by grobert           #+#    #+#             */
/*   Updated: 2023/04/26 13:33:26 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		i;

	va_start(arg, s);
	i = 0;
	while (*s)
	{
		if (*s != '%')
			i += write(1, &*s, 1);
		else
			i += ft_sort(*++s, arg);
		s++;
	}
	va_end(arg);
	return (i);
}
