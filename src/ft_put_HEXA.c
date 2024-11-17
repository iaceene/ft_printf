/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_HEXA.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaajagro <yaajagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:30:43 by yaajagro          #+#    #+#             */
/*   Updated: 2024/11/17 18:05:59 by yaajagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_int_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n)
	{
		n /= 16;
		len++;
	}
	return (len);
}

static void	ft_cpy(unsigned int nbr, char *str, int len)
{
	char	*s;

	s = "0123456789ABCDEF";
	str[len] = '\0';
	while (nbr)
	{
		str[--len] = s[nbr % 16];
		nbr /= 16;
	}
}

int	ft_print_hexa(unsigned int nbr)
{
	char	list[12];
	int		len;

	len = ft_int_len(nbr);
	if (nbr == 0)
		return (ft_putchar('0'));
	ft_cpy(nbr, list, len);
	return (ft_putstr(list));
}
