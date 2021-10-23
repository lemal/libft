/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:43:36 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/20 16:43:38 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	size_t	ft_local_strlen(char	const	*str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static	size_t	ft_local_set_check(char	chr, char	const	*set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (chr == set[i])
			return (0);
		i++;
	}
	return (1);
}

static	char	*ft_local_fill(char	*str, char	const	*src,
				size_t	start, size_t	end)
{
	size_t	i;

	i = 0;
	while (start < end)
	{
		str[i] = src[start];
		i++;
		start++;
	}
	return (str);
}

static	int	ft_local_empty_chk(char	const	*s1, size_t	*i)
{
	if (*s1 == '\0')
	{
		*i = 0;
		return ((int)i);
	}
	else if (s1 == NULL)
		return (-1);
	return (1);
}

char	*ft_strtrim(char	const	*s1, char	const	*set)
{
	t_init_trim	trim_store;

	if (ft_local_empty_chk(s1, &trim_store.i) == 0)
	{
		trim_store.ptr_to_first = (char *)malloc(sizeof(char) * 1);
		*trim_store.ptr_to_first = '\0';
		return (trim_store.ptr_to_first);
	}
	else if (ft_local_empty_chk(s1, &trim_store.i) == -1)
		return (NULL);
	trim_store.i = 0;
	trim_store.lenstr = ft_local_strlen(s1);
	while (s1[trim_store.i] && (ft_local_set_check(s1[trim_store.i], set) == 0))
		trim_store.i++;
	while ((trim_store.lenstr > trim_store.i)
		&& ((ft_local_set_check(s1[trim_store.lenstr - 1], set) == 0)))
		trim_store.lenstr--;
	trim_store.new_length = trim_store.lenstr - trim_store.i;
	trim_store.ptr_to_first = (char *)malloc(sizeof(char)
			* (trim_store.new_length + 1));
	if (trim_store.ptr_to_first == NULL)
		return (NULL);
	trim_store.ptr_to_first[trim_store.new_length] = '\0';
	return (ft_local_fill(trim_store.ptr_to_first,
			s1, trim_store.i, trim_store.lenstr));
}
