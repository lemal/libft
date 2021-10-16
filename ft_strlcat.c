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
	size_t	lendst;

	lendst = ft_strlen(dst);
	if (dstsize > 0)
	{
		dst += lendst;
		while ((*src != '\0') && (lendst < dstsize))
		{
			*dst = *src;
			src++;
			dst++;
			lendst++;
		}
		*dst = '\0';
		return (lendst);
	}
	return (ft_strlen(src));
}
