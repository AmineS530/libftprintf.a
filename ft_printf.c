/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:33:19 by asadik            #+#    #+#             */
/*   Updated: 2022/11/03 18:57:09 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

				/* cspdiuxX% */
static void	coversions(va_list ap, const char param_name, int *len)
{
	if (param_name == 'c')
		ft_putchar_fd ((char)va_arg(ap, int), FD, len);
	if (param_name == 's')
		ft_putstr_fd(va_arg(ap, char *), FD, len);
	if (param_name == 'p')
		ft_putaddr_fd(va_arg(ap, void *), len);
	if (param_name == 'd' || param_name == 'i')
		ft_putnbr_fd(va_arg(ap, int), FD, len);
	if (param_name == 'u')
		ft_putnbr_fd_unsigned(va_arg(ap, unsigned int), FD, len);
	if (param_name == 'x')
		ft_putnbr_fd_hex(va_arg(ap, unsigned int), 'x', len);
	if (param_name == 'X')
		ft_putnbr_fd_hex(va_arg(ap, unsigned int), 'X', len);
	if (param_name == '%')
		ft_putchar_fd ('%', FD, len);
}

int	ft_printf(const char *param_name, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	va_start(ap, param_name);
	while (*param_name)
	{
		if (*param_name == '%')
		{
			param_name++;
			coversions(ap, *param_name, &len);
		}
		else
		{
			ft_putchar_fd(*param_name, FD, &len);
		}
		param_name++;
	}
	va_end(ap);
	return (len);
}
// int main()
// {
// 	//printf("%d", printf("NULL %s", (char *)NULL));
// 	printf("%d\n",ft_printf("NULL %s", (char *)NULL));
// }
