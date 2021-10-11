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
	unsigned char		*take_to;
	const unsigned char	*take_from;
	size_t				i;

	i = 0;
	take_to = dst;
	take_from = src;
	if (take_to > take_from)
	{
		while (len > 0)
		{
			len--;
			take_to[len] = take_from[len];
		}
		return (dst);
	}
	else if (take_to < take_from)
	{
		while (i < len)
		{
			take_to[i] = take_from[i];
			i++;
		}
	}
	return (dst);
}
