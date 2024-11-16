/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddres.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaajagro <yaajagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:09:12 by yaajagro          #+#    #+#             */
/*   Updated: 2024/11/16 19:41:00 by yaajagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned long long ft_int_len(unsigned long long nbr, int *len)
{
    unsigned int    saved_nbr;

    *len = 0;
    if (nbr == 0)
    {
        *len = 1;
        return nbr;
    }
    saved_nbr = nbr;
    while (nbr)
    {
        nbr /= 16;
        (*len)++;
    }
    return saved_nbr;
}

static char *ft_itoa_hexa(unsigned long long nbr)
{
    int     len;
    char    *str;
    char    *hex;

    hex = "0123456789abcdef";
    if (nbr == 0)
        return ("0");
    nbr = ft_int_len(nbr, &len);
    str = malloc(len + 1);
    if (!str)
        return NULL;
    str[len] = '\0';
    while (nbr)
    {
        str[--len] = hex[nbr % 16];
        nbr /= 16;
    }
    return (str);
}

int ft_print_addres(unsigned long long nbr)
{
	int     len;
    char    *str;
    
    len = 0;
    str = ft_itoa_hexa(nbr);
    if (str)
        len = ft_putstr("0x");
    ft_putstr(str);
	if (nbr != 0)
		free(str);
    if (nbr == 0)
        return (1);
	while (nbr)
	{
		nbr /= 16;
		len++;
	}
	return (len);
}
