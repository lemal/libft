/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:16:39 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/07 14:16:43 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

static	int	ft_local_checks(size_t	num, int	minus)
{
	if (minus == -1)
	{
		if (num * minus >= (size_t)INT_MIN)
			return ((int)(num * minus));
		else if (num * minus < (size_t)INT_MIN)
			return (0);
	}
	if (num <= (size_t)INT_MAX)
	{
		return ((int)num);
	}
	else if (num > (size_t)INT_MAX)
		return (-1);
	return (0);
}

int	ft_atoi(const	char	*str)
{
	size_t	num;
	int		minus;

	num = 0;
	minus = 1;
	while (((*str >= 9) && (*str <= 13)) || (*str == 32))
		str++;
	if ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (ft_local_checks(num, minus));
}
