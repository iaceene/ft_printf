/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddres.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaajagro <yaajagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 22:09:12 by yaajagro          #+#    #+#             */
/*   Updated: 2024/11/16 20:48:04 by yaajagro         ###   ########.fr       */
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

int     ft_print_addres(unsigned long long nbr)
{
	char	list[17];
	int		len;

	if (nbr == 0)
		return (ft_putchar('0'));
	len = Ulong_len(nbr);
	list[len] = '\0';
	ft_cpy(nbr, list, len);
	ft_putstr("0x");
	ft_putstr(list);
	return (len + 2);
}
