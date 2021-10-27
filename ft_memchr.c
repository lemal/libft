/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@studet.21-school>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:02:30 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/08 12:02:32 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const	void *s, int	c, size_t	n)
{
	size_t					i;
	unsigned char			x;
	const unsigned char		*str;

	i = 0;
	x = (unsigned char)c;
	str = s;
	while (i < n)
	{
		if (str[i] == x)
			return ((void *)&str[i]);
		i++;
	}
	return ((void *)0);
}
