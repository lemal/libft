/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@studet.21-school>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:03:37 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/08 12:03:39 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const	char
		*haystack, const	char	*needle, size_t	len)
{
	size_t	count;

	if (*needle == '\0')
		return ((char *)haystack);
	count = 0;
	while (*haystack && len > 0)
	{
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
			count++;
		}
		if (*needle == '\0')
		{
			haystack -= count;
			needle -= count;
			count = 0;
		}
		else if (*needle == '\0')
		{
			haystack -= count;
			return ((char *)haystack);
		}
		len--;
	}
	return ((void *)0);
}
