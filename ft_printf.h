/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadik <asadik@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:22:54 by asadik            #+#    #+#             */
/*   Updated: 2022/11/03 19:04:42 by asadik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define FD 1
# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *param_name, ...);
void	ft_putchar_fd(char c, int fd, int *len);
int		ft_putstr_fd(char *s, int fd, int *len);
void	ft_putnbr_fd(int n, int fd, int *len);
void	ft_putnbr_fd_unsigned(unsigned int n, int fd, int *len);
void	ft_putnbr_fd_hex(unsigned int n, char x, int *len);
void	ft_putaddr_fd(void *n, int *len);

#endif
