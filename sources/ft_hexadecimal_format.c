/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_format.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocuk <ahocuk@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:43:51 by ahocuk            #+#    #+#             */
/*   Updated: 2022/12/09 16:23:47 by ahocuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_hexadecimal_format(unsigned int value)
{
	int		a;
	char	*str;

	str = ft_itoa_base(value, "0123456789abcdef");
	a = ft_string_format(str);
	free(str);
	return (a);
}
