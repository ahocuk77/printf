/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocuk <ahocuk@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:44:36 by ahocuk            #+#    #+#             */
/*   Updated: 2022/12/09 16:25:42 by ahocuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

static int	ft_print_prefix(char *str)
{
	int	i;

	i = ft_string_format(str);
	return (i);
}

int	ft_pointer_format(void *ptr_address)
{
	int				i;
	char			*str;
	unsigned long	address;

	address = (unsigned long)ptr_address;
	i = ft_print_prefix("0x");
	str = ft_itoa_base(address, "0123456789abcdef");
	i = i + ft_string_format(str);
	free(str);
	return (i);
}
