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

int	ft_atoi(const	char	*str)
{
	int	num;
	int	minus;

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
	return (num * minus);
}
