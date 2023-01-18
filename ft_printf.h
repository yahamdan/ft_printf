/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yahamdan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:42:16 by yahamdan          #+#    #+#             */
/*   Updated: 2022/11/09 11:16:09 by yahamdan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_strlen(char *s);
int	ft_putnbru(unsigned int nb);
int	ft_putnbr(long n);
int	ft_printf(const char *s, ...);
int	ft_putpx(unsigned long n, char *base);

#endif
