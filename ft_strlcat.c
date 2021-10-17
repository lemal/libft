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
	size_t	lensrc;
	size_t	lendst;
	size_t	i;

	lensrc = ft_strlen(src);
	lendst = ft_strlen(dst);
	i = lendst;
	if ((dstsize > 0) && ((lendst + lensrc - 1) < dstsize))
	{
		dst += i;
		while ((*src) && (i - 1 < dstsize) && ((lendst + lensrc - 1) < dstsize))
		{
			*dst = *src;
			src++;
			dst++;
			i++;
		}
		*dst = '\0';
		return (i);
	}
	return (ft_strlen(src));
}
