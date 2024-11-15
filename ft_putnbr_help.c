/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_help.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaajagro <yaajagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:31:20 by yaajagro          #+#    #+#             */
/*   Updated: 2024/11/15 19:35:49 by yaajagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_nbr(int nbr)
{
	int len = 0;
    int sing = 0;
    
    ft_putstr(ft_itoa(nbr));
	if (nbr < 0)
	{
		sing = 1;
		nbr *= -1;
		len = 1;
	}
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
    if (sing)
        return (len + 1);
	return (len);
}
