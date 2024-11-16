/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaajagro <yaajagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:27:45 by yaajagro          #+#    #+#             */
/*   Updated: 2024/11/16 19:45:18 by yaajagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

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
