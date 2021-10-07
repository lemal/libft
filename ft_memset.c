/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:47:15 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/07 15:47:18 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void	*b, int	c, size_t	len)
{
	size_t			i;
	unsigned char	temp_rev;
	unsigned char	*temp;

	i = 0;
	temp = b;
	while (i < len)
	{
		temp[i] = (c % 10) - '0';
		c = c / 10;
		i++;
	}
	i = 0;
	while (i < len)
	{
		temp_rev = temp[i];
		temp[i] = temp[len - 1];
		temp[len - 1] = temp_rev;
		i++;
	}
	return (temp);
}
