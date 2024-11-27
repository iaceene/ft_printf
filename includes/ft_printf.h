/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaajagro <yaajagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:07:36 by yaajagro          #+#    #+#             */
/*   Updated: 2024/11/19 21:15:41 by yaajagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_print_nbr(int nbr);
int	ft_print_hex(unsigned int nbr);
int	ft_print_hexa(unsigned int nbr);
int	ft_put_unbr(unsigned int nbr);
int	ft_print_addres(unsigned long long nbr);

#endif