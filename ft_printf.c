/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaajagro <yaajagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:27:45 by yaajagro          #+#    #+#             */
/*   Updated: 2024/11/15 00:30:31 by yaajagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_check(char c)
{
    return (c == 'd' || c == 'i' || c == 'u' || c == 'u' ||
            c == 'x' || c == 'X' || c == 's');
}

int ft_odd (int i)
{
    if(i % 2 != 0)
        return (0);
    return (1);
}

static int ft_print_per(char *str, int i)
{
    int count = 0;
    if(str[i - 1] != '%')
        return(0);
    while(i >= 0 && str[--i] == '%')
        count++;
    if (!ft_odd(count))
        return (1);
    return(0);
}

static int ft_check_per(char *str, int i)
{
    int count = 0;
    if(str[i - 1] != '%')
        return(0);
    while(i >= 0 && str[--i] == '%')
        count++;
    if (ft_odd(count))
        return (1);
    return(0);
}

int ft_printf(const char *str, ...)
{
    size_t i;
    int count;
    
    count = 0;
    i = 0;
    va_list ap;
    while(str[i])
    {
        if(str[i] == '%' && ft_print_per((char *)str, i))
            count = count + ft_putchar(str[i]);
        else if(str[i] == 'c' && ft_check_per((char *)str, i))
            count = count + ft_putchar(str[i]);
        else if(str[i] == 's' && ft_check_per((char *)str, i))
            count = count + ft_putstr(va_arg(ap, char *));
        else if(str[i] == 'p' && ft_check_per((char *)str, i))
            count = count + ft_putchar(str[i]);
        else if(str[i] == 'd' && ft_check_per((char *)str, i))
            count = count + ft_putchar(str[i]);
        else if(str[i] == 'i' && ft_check_per((char *)str, i))
            count = count + ft_putchar(str[i]);
        else if(str[i] == 'u' && ft_check_per((char *)str, i))
            count = count + ft_putchar(str[i]);
        else
            count = count + ft_putchar(str[i]);
        i++;
    }
    va_start(ap, str);
    va_end(ap);
    return (count);
}
