/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_Unbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaajagro <yaajagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:14:20 by yaajagro          #+#    #+#             */
/*   Updated: 2024/11/15 21:10:00 by yaajagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	ft_int_len(unsigned int nbr, int *len)
{
	unsigned int	saved_nbr;

	*len = 0;
	if (nbr == 0)
	{
		*len = 1;
		return (nbr);
	}
	saved_nbr = nbr;
	while (nbr)
	{
		nbr /= 10;
		(*len)++;
	}
	return (saved_nbr);
}

static char	*ft_itoa(unsigned int nbr)
{
	int     len;
	char    *str;

	if (nbr == 0)
		return ("0");
	nbr = ft_int_len(nbr, &len);
	str = malloc(len + 1);
	if (!str)
		return NULL;
	str[len] = '\0';
	while (nbr)
	{
		str[--len] = (nbr % 16) + '0';
		nbr /= 10;
	}
	return (str);
}

int ft_putUnbr(unsigned int nbr)
{
	int     len;
	char    *str;
	
	len = 0;
	str = ft_itoa(nbr);
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

// int main()
// {
//     int i = ft_putUnbr(1337);
//     printf("\n%d\n", i);
//     return (0);
// }