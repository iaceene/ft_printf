/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaajagro <yaajagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:27:45 by yaajagro          #+#    #+#             */
/*   Updated: 2024/11/15 19:59:46 by yaajagro         ###   ########.fr       */
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
    
    va_end(ap);
    return (count);
}
