/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:41:54 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/20 16:41:56 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static	size_t	ft_local_check_exist(char	const	*s, size_t	start,
size_t	len)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	if (start > i)
		return (-1);
	if ((start + len) <= i)
		return (len);
	return (i);
}

static	char	*ft_local_mem_to_str(char	const	*s, unsigned	int	start,
size_t	len)
{
	size_t	i;
	size_t	j;
	char	*ptr_to_first;

	i = ft_local_check_exist(s, start, len);
	j = start;
	if (i == (size_t)(-1))
	{
		ptr_to_first = (char *)malloc(sizeof(char));
		*ptr_to_first = '\0';
		return (ptr_to_first);
	}
	ptr_to_first = (char *)malloc(sizeof(char) * i + 1);
	i = 0;
	if (ptr_to_first == NULL)
		return (NULL);
	while (s[j] && (i < len))
	{
		ptr_to_first[i] = s[j];
		j++;
		i++;
	}
	ptr_to_first[i] = '\0';
	return (ptr_to_first);
}

char	*ft_substr(char	const	*s, unsigned	int	start,
size_t	len)
{
	return (ft_local_mem_to_str(s, start, len));
}
