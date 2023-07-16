/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:27:58 by grobert           #+#    #+#             */
/*   Updated: 2023/04/24 15:28:18 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_sort(char c, va_list arg);
int	ft_ptr(unsigned long n, int x);
int	ft_base(long long n, char *base);
int	ft_str(char *s);

#endif /* FT_PRINTF_H*/
