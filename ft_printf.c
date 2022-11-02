/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:33:19 by asadik            #+#    #+#             */
/*   Updated: 2022/11/02 13:21:51 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	coversions(va_list ap, const char param_name, int len)
{
	// cspdiuxX%
	if (l3iba[i + 1] == 'c')
		ft_putchar_fd ("", FD);
	if (l3iba[i + 1] == 's')

	if (l3iba[i + 1] == 'p')

	if (l3iba[i + 1] == 'd' || l3iba[i + 1] == 'i')
		ft_putnbr_fd(l3iba[i], FD);
	if (l3iba[i + 1] == 'u')

	if (l3iba[i + 1] == 'x')

	if (l3iba[i + 1] == 'X')

	if (l3iba[i + 1] == '%')
		ft_putchar_fd ("%", FD);
}

int	ft_printf(const char *param_name, ...)
{
	va_list	ap;

	va_start(ap , param_name[i]);
	while (param_name[i]!= '%' && param_name[i])
	{
		if (l3iba[i] == '%')
		{

		}
		else
		{
			ft_putchar_fd(param_name[i], FD);
		}
		i++;
	}
	va_end(ap);
}
