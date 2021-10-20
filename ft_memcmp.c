/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@studet.21-school>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:02:56 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/08 12:02:58 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const	void *s1, const	void	*s2, size_t	n)
{
	const unsigned char	*temp_1;
	const unsigned char	*temp_2;
	size_t				i;

	i = 0;
	temp_1 = s1;
	temp_2 = s2;
	if (!n)
		return (0);
	while (temp_1[i] == temp_2[i])
	{
		if (n == i + 1)
			return (0);
		i++;
	}
	return (temp_1[i] - temp_2[i]);
}
