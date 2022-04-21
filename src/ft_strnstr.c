/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:03:37 by tapulask          #+#    #+#             */
/*   Updated: 2022/03/31 09:15:32 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char
		*haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	else if (*needle != '\0')
	{
		while ((haystack[i] != '\0') && (i < len))
		{
			j = i;
			k = 0;
			while ((haystack[j] == needle[k])
				&& (needle[k] != '\0') && (j < len))
			{
				j++;
				k++;
			}
			if (needle[k] == '\0')
				return ((char *)(haystack + i));
			i++;
		}
	}
	return ((void *)0);
}
