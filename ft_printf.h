/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaajagro <yaajagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:07:36 by yaajagro          #+#    #+#             */
/*   Updated: 2024/11/16 19:39:39 by yaajagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <unistd.h>
#include <libc.h>
#include <stdio.h>
#include <string.h>

int     ft_printf(const char *str, ...);
int     ft_putchar(char c);
int 	ft_putstr(char *s);
int     ft_print_nbr(int nbr);
int     ft_print_hex(unsigned int nbr);
int     ft_print_HEXA(unsigned int nbr);
int     ft_putUnbr(unsigned int nbr);
int     ft_print_addres(unsigned long long nbr);
// int     ft_print_ptr(unsigned long long ptr);

#endif