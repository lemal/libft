/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:47:29 by tapulask          #+#    #+#             */
/*   Updated: 2022/03/31 09:14:51 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (((dstsize - 1) != 0) && (*src != '\0'))
		{
			*dst = *src;
			dstsize -= 1;
			dst++;
			src++;
			i++;
		}
		*dst = '\0';
	}
	return (ft_strlen(src - i));
}
