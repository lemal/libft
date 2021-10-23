/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:02:17 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/07 15:02:19 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_local_dig_cnt(int	cpy_n)
{
	int		i;

	i = 0;
	while (cpy_n != 0)
	{
		cpy_n = cpy_n / 10;
		i++;
	}
	return (i);
}

static	void	ft_local_filler(int	n,
	char	*mmryspace, int	index, int	neg_flag)
{
	unsigned int	num;

	num = (unsigned int)n;
	if (index != 0)
		ft_local_filler(num / 10, mmryspace, index - 1, neg_flag);
	if (neg_flag == 1)
		index++;
	mmryspace[index] = (num % 10) + '0';
}

char	*ft_itoa(int	n)
{
	int		i;
	int		flag_n;
	char	*ptr_to_first;

	i = ft_local_dig_cnt(n);
	flag_n = 0;
	if (n == 0)
		i = 1;
	else if (n < 0)
		flag_n = 1;
	ptr_to_first = (char *)malloc(sizeof(char) * (i + flag_n + 1));
	if (ptr_to_first == NULL)
		return (NULL);
	if (n < 0)
	{
		ptr_to_first[0] = '-';
		n *= -1;
	}
	ft_local_filler(n, ptr_to_first, i - 1, flag_n);
	ptr_to_first[i + flag_n] = '\0';
	return (ptr_to_first);
}
