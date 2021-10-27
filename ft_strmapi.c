/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:43:26 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/20 16:43:28 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_local_strlen(char	const	*s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strmapi(char	const	*s,	char	(*f)(unsigned
			int, char))
{
	size_t	i;
	size_t	size_str;
	char	*ptr_to_first;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	if (*s == '\0')
	{
		ptr_to_first = (char *)malloc(sizeof(char) * 1);
		*ptr_to_first = '\0';
		return (ptr_to_first);
	}
	size_str = ft_local_strlen(s);
	ptr_to_first = (char *)malloc(sizeof(char) * (size_str + 1));
	if (ptr_to_first == NULL)
		return (NULL);
	ptr_to_first[size_str] = '\0';
	while (s[i])
	{
		ptr_to_first[i] = f(i, s[i]);
		i++;
	}
	return (ptr_to_first);
}
