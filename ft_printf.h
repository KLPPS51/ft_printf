/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobullad <mobullad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:46:49 by mobullad          #+#    #+#             */
/*   Updated: 2024/11/25 18:49:36 by mobullad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *string, ...);
int	ft_print_ptr(unsigned long nb);
int	ft_print_hex(unsigned long nb, int i);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(const char *str);
int	ft_unsigned_putnbr(unsigned int n);

#endif