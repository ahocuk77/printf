/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahocuk <ahocuk@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:43:56 by ahocuk            #+#    #+#             */
/*   Updated: 2022/12/12 14:28:49 by ahocuk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_percent_format(char c)
{
	int	a;

	a = 0;
	ft_putchar_fd2(c, 1);
	return (a + 1);
}
