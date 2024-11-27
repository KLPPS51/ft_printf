/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobullad <mobullad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:15:48 by mobullad          #+#    #+#             */
/*   Updated: 2024/11/25 17:37:09 by mobullad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_putnbr(unsigned int n)
{
	unsigned int	nb;

	nb = 0;
	if (n <= 9)
		return (ft_putchar((n + 48)));
	else
	{
		nb += ft_unsigned_putnbr(n / 10);
		nb += ft_unsigned_putnbr(n % 10);
	}
	return (nb);
}
