/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:00:42 by asadik            #+#    #+#             */
/*   Updated: 2022/11/03 17:59:46 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd_longhex(unsigned long long n, int *len)
{
	int		base;
	char	*hex;

	base = 16;
	hex = HEX_LOWER;
	if (n < (unsigned long long)base)
		ft_putchar_fd(hex[n % base], FD, len);
	else
	{
		ft_putnbr_fd_longhex((n / base), len);
		ft_putnbr_fd_longhex((n % base), len);
	}
}

void	ft_putaddr_fd(void *n, int *len)
{
	unsigned long long	owo;

	owo = (unsigned long long)n;
	ft_putstr_fd("0x", FD, len);
	ft_putnbr_fd_longhex(owo, len);
}
// #include <stdio.h>
// int main() {
//   long *apa;
//   *apa = 5;
//     printf("%p \n",apa );
// 	ft_putaddr_fd(apa, FD);
//     return 0;
// }
