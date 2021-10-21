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

static	size_t	ft_local_check_exist(char	const	*s, unsigned	int	start)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	if (start > i)
		return (-1);
	return (i);
}

static	char	*ft_local_mem_to_str(char	const	*s, unsigned	int	start,
size_t	len)
{
	size_t	i;
	size_t	j;
	char	*ptr_to_first;

	i = 0;
	j = start;
	ptr_to_first = (char *)malloc(sizeof(char) * len + 1);
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
	size_t	strln;

	strln = ft_local_check_exist(s, start);
	if (strln != (size_t)(-1))
		return (ft_local_mem_to_str(s, start, len));
	return (NULL);
}

/*
int main(void) 
{
	char str[] = "lorem ipsum dolor sit amet";

	printf("%s", ft_substr(str, 400, 20));
}
*/