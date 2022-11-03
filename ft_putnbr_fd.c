/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:41:32 by asadik            #+#    #+#             */
/*   Updated: 2022/11/03 14:42:48 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd, int *len)
{
	long	nb;

	nb = ((long)n);
	if (nb < 0)
	{
		ft_putchar_fd('-', fd, len);
		nb = -nb;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar_fd(nb + '0', fd, len);
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd, len);
		ft_putnbr_fd(nb % 10, fd, len);
	}
}
