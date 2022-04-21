/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:16:33 by tapulask          #+#    #+#             */
/*   Updated: 2022/04/21 21:33:27 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_record(t_data *data, char **argv, int argc)
{
	//stuff goes here
}

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i])
		i++;
	return (i);
}

static int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (c);
	return (-1);
}

static int	ft_local_checks(size_t num)
{
	if (num <= (size_t)(+2147483647))
		return ((int)num);
	else if (num > (size_t)(+2147483647))
		return (-1);
	return (0);
}

int ft_atoi(const char *str, bool *flag)
{
	size_t	num;
	int		i;

	if (!str)
		return (-1);
	i = 0;
	num = 0;
	while (ft_isdigit(*str) != -1)
	{
		num = num * 10 + (*str - '0');
		i++;
		str++;
	}
	if (i < ft_strlen(str))
		*flag = true;
	return (ft_local_checks(num));
}