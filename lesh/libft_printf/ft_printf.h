/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamibr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:08:59 by mohamibr          #+#    #+#             */
/*   Updated: 2024/06/18 12:12:04 by mohamibr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef pRINTF_H
# define pRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		printf(const char *hello, ...);
char	*ft_itoa(int n);
char	*ft_strdup(const char *src);
char	*ft_utoa(unsigned int n);
int		ft_strlen(const char *str);
void	putnbr_fd(int n, int fd);
int		putchar_fd(char c, int fd);
void	putstr_fd(char *s, int fd);
void	check_1(const char ch, va_list ap, int *count);
void	check_2(const char ch, va_list ap, int *count);
void	check_arg(const char ch, va_list ap, int *count);
void	hexa_l(char *str, unsigned int x);
void	hexa(char *str, unsigned long x, int z);
void	hexa_u(char *str, unsigned int x);
void	pointer_p(char *str, void *p);

#endif
