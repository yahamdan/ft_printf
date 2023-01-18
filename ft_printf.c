/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:50:07 by yahamdan          #+#    #+#             */
/*   Updated: 2022/11/09 11:14:16 by yahamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	checks(char s)
{
	if (s == 'c' || s == 's' || s == 'p' || s == 'd'
		||s == 'i' || s == 'u' || s == 'x' || s == 'X')
		return (1);
	else
		return (0);
}

int	addnext(va_list list, char s)
{
	int	count;

	count = 0;
	if (s == 'p')
	{
		count += ft_putstr("0x");
		count += ft_putpx(va_arg(list, unsigned long), "0123456789abcdef");
	}
	else if (s == 'c')
		count += ft_putchar(va_arg(list, int));
	else if (s == 's')
		count += ft_putstr(va_arg(list, char *));
	else if (s == 'i' || s == 'd')
		count += ft_putnbr(va_arg(list, int));
	else if (s == 'X')
		count += ft_putpx(va_arg(list, unsigned int), "0123456789ABCDEF");
	else if (s == 'x')
		count += ft_putpx(va_arg(list, unsigned int), "0123456789abcdef");
	else if (s == 'u')
		count += ft_putnbru(va_arg(list, unsigned int));
	else
		count += ft_putchar(s);
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	list;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(list, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == '%')
				count += ft_putchar('%');
			else if (checks(s[i]) == 1)
				count += addnext(list, s[i]);
		}
		else
			count += ft_putchar(s[i]);
		i++;
	}
	va_end(list);
	return (count);
}
