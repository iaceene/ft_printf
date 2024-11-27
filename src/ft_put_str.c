/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaajagro <yaajagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:21:19 by yaajagro          #+#    #+#             */
/*   Updated: 2024/11/17 19:07:52 by yaajagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	count;

	count = 0;
	if (!s)
		return (ft_putstr("(null)"));
	i = 0;
	while (s[i])
	{
		count += ft_putchar(s[i]);
		i++;
	}
	return (count);
}
