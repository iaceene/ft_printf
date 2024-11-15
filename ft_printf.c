/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaajagro <yaajagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:27:45 by yaajagro          #+#    #+#             */
/*   Updated: 2024/11/15 19:26:51 by yaajagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
    size_t i;
    int count;
    
    count = 0;
    i = 0;
    va_list ap;
    va_start(ap, str);
    while(str[i])
    {
        if(str[i] == '%' && str[i + 1] == '%')
        {
            count += ft_putchar('%');
            i++;
        }
        else if (str[i] == '%' && str[i + 1] == 'c')
        {
            count += ft_putchar(va_arg(ap, int));
            i++;
        }
        else if (str[i] == '%' && str[i + 1] == 's')
        {
            count += ft_putstr(va_arg(ap, char *));
            i++;
        }
        i++;
    }
    va_end(ap);
    return (count);
}
