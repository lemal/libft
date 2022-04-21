/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:50:19 by tapulask          #+#    #+#             */
/*   Updated: 2022/03/31 09:14:42 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	t_init	storage;

	storage.dst_temp = dstsize;
	storage.i = 0;
	storage.j = 0;
	storage.count_src = 0;
	storage.count_dst = 0;
	while (src[storage.count_src])
		storage.count_src++;
	while (dst[storage.count_dst] && (storage.dst_temp != 0))
	{
		storage.count_dst++;
		storage.dst_temp--;
	}
	storage.i += storage.count_dst;
	if (storage.dst_temp == 0)
		return (storage.count_src + storage.count_dst);
	while ((storage.i < (dstsize - 1)) && src[storage.j])
	{
		dst[storage.i] = src[storage.j];
		storage.i++;
		storage.j++;
	}
	dst[storage.i] = '\0';
	return (storage.i - storage.j + storage.count_src);
}
