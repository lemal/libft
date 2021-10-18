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
}
