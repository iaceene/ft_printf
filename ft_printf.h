/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaajagro <yaajagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:07:36 by yaajagro          #+#    #+#             */
/*   Updated: 2024/11/12 21:25:42 by yaajagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int     ft_printf(const char *, ...);
int     ft_atoi(const char *str);
void	ft_putchar(char c);
void	ft_putstr(char *s);


#endif