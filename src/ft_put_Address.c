/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_Address.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaajagro <yaajagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:09:12 by yaajagro          #+#    #+#             */
/*   Updated: 2024/11/17 00:31:38 by yaajagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	Ulong_len(unsigned long n)
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

static void	ft_cpy(unsigned long nbr, char *str, int len)
{
	char *s;

	s = "0123456789abcdef";
	while (nbr)
	{
		str[--len] = s[nbr % 16];
		nbr /= 16;
	}
}

int     ft_print_addres(unsigned long nbr)
{
	char	list[17];
	int		len;
	int		count;

	count = 0;
	len = Ulong_len(nbr);
	list[len] = '\0';
	ft_cpy(nbr, list, len);
	count += ft_putstr("0x");
	count += ft_putstr(list);
	return (count + 1);
}
