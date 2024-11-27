/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaajagro <yaajagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:27:45 by yaajagro          #+#    #+#             */
/*   Updated: 2024/11/19 04:30:55 by yaajagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_print(va_list args, char next)
{
	int	len;

	len = 0;
	if (next == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (next == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (next == 'p')
		len += ft_print_addres(va_arg(args, unsigned long long));
	else if (next == 'd' || next == 'i')
		len += ft_print_nbr(va_arg(args, int));
	else if (next == 'u')
		len += ft_put_unbr(va_arg(args, unsigned int));
	else if (next == 'x')
		len += ft_print_hex(va_arg(args, unsigned int));
	else if (next == 'X')
		len += ft_print_hexa(va_arg(args, unsigned int));
	else if (next == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		len;

	i = 0;
	len = 0;
	if (write(1, NULL, 0) == -1)
		return (-1);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			len += ft_print(args, (char)str[i + 1]);
			i++;
		}
		else if (str[i] != '%')
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
