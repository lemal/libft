/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:50:57 by tapulask          #+#    #+#             */
/*   Updated: 2022/03/31 09:11:33 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_local_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	if (n > 0)
	{
		i = 0;
		temp = s;
		while (i < n)
		{
			temp[i] = '\0';
			i++;
		}
	}
}

void	*ft_calloc(size_t	count, size_t	size)
{
	void	*ptr;

	if ((size * count) < 18446744073709551615ULL)
	{
		ptr = malloc(size * count);
		if (ptr == NULL)
			return ((void *)0);
		ft_local_bzero(ptr, size * count);
		return (ptr);
	}
	return (NULL);
}
