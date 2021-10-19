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

int	ft_memcmp(const	void *s1, const	void	*s2, size_t	n)
{
	const unsigned char	*temp_1;
	const unsigned char	*temp_2;

	temp_1 = s1;
	temp_2 = s2;
	if (!n)
		return (0);
	while (((*temp_1 != '\0') || (*temp_2 != '\0')) && (n > 0))
	{
		if (*temp_1 < *temp_2)
			return ((int)(*temp_1 - *temp_2));
		else if (*temp_1 > *temp_2)
			return ((int)(*temp_1 - *temp_2));
		temp_1++;
		temp_2++;
		n--;
	}
	if (*temp_1 == '\0' || *temp_2 == '\0')
		return ((int)(*temp_1 - *temp_2));
	return (0);
}
/*
size_t				i;
	const unsigned char	*temp_1;
	const unsigned char	*temp_2;
	
	i = 0;
	temp_1 = s1;
	temp_2 = s2;
	if (!n)
		return (0);
	while (((temp_1[i] != '\0') && (temp_2[i] != '\0')) && (n > i))
	{
		if ((temp_1[i] < temp_2[i]) || (temp_1[i] > temp_2[i]))
			return ((int)(temp_1[i] - temp_2[i]));
		i++;
	}
	// if (*temp_1 == '\0' || *temp_2 == '\0')
	// 	return ((int)(*temp_1 - *temp_2));
	return (0);
*/