/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@studet.21-school>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:50:19 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/08 11:50:22 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char	*dst, const	char	*src, size_t	dstsize)
{
	t_init	storage;

	storage.dst_temp = dstsize;
	storage.i = 0;
	storage.j = 0;
	storage.count_src = 0;
	storage.count_dst = 0;
	while (src[storage.count_src])
		storage.count_src++;
	while (dst[storage.count_dst] && storage.dst_temp != 0)
	{
		storage.count_dst++;
		storage.dst_temp--;
	}
	storage.i += storage.count_dst;
	if (storage.dst_temp == 0)
		return (storage.count_src + storage.count_dst);
	while (storage.i < (dstsize - 1) && src[storage.j])
	{
		dst[storage.i] = src[storage.j];
		storage.i++;
		storage.j++;
	}
	dst[storage.i] = '\0';
	return (storage.i - storage.j + storage.count_src);
}
/*
	size_t	count_src;
	size_t	count_dst;
	size_t	i;
	size_t	j;
	size_t	dst_temp;

	dst_temp = dstsize;
	i = 0;
	j = 0;
	count_src = 0;
	count_dst = 0;
	while (src[count_src])
		count_src++;
	while (dst[count_dst] && dst_temp != 0)
	{
		count_dst++;
		dst_temp--;
	}
	i += count_dst;
	if (dst_temp == 0)
		return (count_src + count_dst);
	while (i < (dstsize - 1) && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (i - j + count_src);
*/