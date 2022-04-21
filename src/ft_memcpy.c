/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:33:12 by tapulask          #+#    #+#             */
/*   Updated: 2022/03/31 09:12:47 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*temp;
	const unsigned char	*temp_2;

	i = 0;
	temp = dst;
	temp_2 = src;
	if ((dst == NULL) && (src == NULL))
		return (NULL);
	while (i < n)
	{
		temp[i] = temp_2[i];
		i++;
	}
	return (dst);
}
