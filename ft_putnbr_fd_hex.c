/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:15:42 by asadik            #+#    #+#             */
/*   Updated: 2022/11/03 18:18:17 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd_hex(unsigned int n, char x, int *len)
{
	int		base;
	char	*hex;

	base = 16;
	if (x == 'x')
		hex = HEX_LOWER;
	else
		hex = HEX_UPPER;
	if (n < (unsigned int )base)
		ft_putchar_fd(hex[n % base], FD, len);
	else
	{
		ft_putnbr_fd_hex((n / base), x, len);
		ft_putnbr_fd_hex((n % base), x, len);
	}
}
// #include <stdio.h>
// int main()
// {
// int len = 0;
// 	ft_putnbr_fd_hex(255,'x', FD, &len);
// 	ft_putchar_fd('\n', FD,&len);
// 	ft_putnbr_fd_hex(255,'X', FD,&len);
// 	printf("%d", len);
// }
