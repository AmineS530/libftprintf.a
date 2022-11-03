/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:28:25 by asadik            #+#    #+#             */
/*   Updated: 2022/11/03 19:15:46 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd, int *len)
{
	if (!s)
		ft_putstr_fd("(null)", FD, len);
	else
		while (*s)
			(*len) += write (fd, s++, 1);
	return (*len);
}

// #include <stdio.h>
// int main()
// {
// int len = 0;

// 	ft_putstr_fd("OOGA BOOGA", FD,&len);
// 	printf("%d", len);
// }
