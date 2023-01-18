/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpx_pf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 02:29:23 by yahamdan          #+#    #+#             */
/*   Updated: 2022/11/09 11:16:02 by yahamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpx(unsigned long n, char *base)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i += ft_putpx((n / 16), base);
		i += ft_putpx((n % 16), base);
	}
	else
		i += ft_putchar(base[n]);
	return (i);
}
