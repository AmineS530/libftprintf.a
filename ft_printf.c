/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:33:19 by asadik            #+#    #+#             */
/*   Updated: 2022/11/01 15:11:37 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	coversions();

int	ft_printf(const char *param_name, ...)
{
	va_list	ap;

	va_start(ap , param_name[i]);
	while (param_name[i]!= '%' and param_name[i])
	{
		if (l3iba[i] == '%')
		{
			if (l3iba[i + 1] == '%')
				ft_putchar_fd ("%", FD);
			if (l3iba[i + 1] == 'd' || l3iba[i + 1] == 'i')
				ft_putnbr_fd(l3iba[i], FD);
		}
		else
		{
			ft_putchar_fd(param_name[i], FD);
		}
		i++;
	}

	va_end(ap);
}
