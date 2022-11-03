/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_unsigned.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:57:58 by asadik            #+#    #+#             */
/*   Updated: 2022/11/03 16:50:21 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd_unsigned(unsigned int n, int fd, int *len)
{
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd, len);
		ft_putnbr_fd(n % 10, fd, len);
	}
	if (n >= 0 && n <= 9)
		ft_putchar_fd(n + '0', fd, len);
}
