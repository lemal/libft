/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@studet.21-school>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:56:21 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/08 10:56:23 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void	*dst, const	void	*src, size_t	len)
{
	size_t				i;
	unsigned char		*temp;
	const unsigned char	*temp_2;

	i = 0;
	temp = dst;
	temp_2 = src;
	while (i < len)
	{
		temp[i] = temp_2[i];
		i++;
	}
	return (dst);
}
/*	size_t				i;
	unsigned char		*temp;
	const unsigned char	*temp_2;

	temp = dst;
	temp_2 = src;
	while (i < len)
	{
		if (§												)
		{
		}
		temp[i] = temp_2[i];
		i++;
	}*/