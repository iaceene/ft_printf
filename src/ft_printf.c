/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaajagro <yaajagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:27:45 by yaajagro          #+#    #+#             */
/*   Updated: 2024/11/16 23:57:54 by yaajagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_print(char *s, va_list *ap)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i + 1] && s[i] == '%' && s[i + 1] == 'c')
        {
            count += ft_putchar(va_arg(*ap, int));
            i++;
        }
        else
            count += ft_putchar(s[i]);
        i++;
    }
    return (count);
}

int ft_printf(const char *str, ...)
{
    int count;
    
    count = 0;
    va_list ap;
    count = ft_print((char *)str, &ap);
    va_start(ap, str);
    va_end(ap);
    return (count);
}
