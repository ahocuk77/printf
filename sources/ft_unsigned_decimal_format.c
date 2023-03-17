/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_decimal_format.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocuk <ahocuk@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:44:43 by ahocuk            #+#    #+#             */
/*   Updated: 2022/12/05 17:21:00 by ahocuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_unsigned_decimal_format(unsigned int value)
{
	int		a;
	char	*str;

	str = ft_itoa_base(value, "0123456789");
	a = ft_string_format(str);
	free(str);
	return (a);
}
