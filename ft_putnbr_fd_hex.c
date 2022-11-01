/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:15:42 by asadik            #+#    #+#             */
/*   Updated: 2022/11/01 13:30:55 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd_hex(int n, char x, int fd)
{
	int		base;
	char	*hex;

	base = 16;
	if (x == 'x')
		hex = HEX_LOWER;
	else
		hex = HEX_UPPER;
	if (n < base)
		ft_putchar_fd(hex[n % base], FD);
	else
	{
		ft_putnbr_fd_hex((n / base), x , FD);
		ft_putnbr_fd_hex((n % base), x , FD);

	}
}
