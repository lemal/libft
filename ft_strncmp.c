/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@studet.21-school>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:56:07 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/08 11:56:08 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const	char	*s1, const	char	*s2, size_t	n)
{	
	unsigned char	*temp_1;
	unsigned char	*temp_2;

	temp_1 = (unsigned char *)s1;
	temp_2 = (unsigned char *)s2;
	while ((*temp_1 != '\0' || *temp_2 != '\0') && (n > 0))
	{
		if (*temp_1 == *temp_2)
		{
			n--;
			temp_1++;
			temp_2++;
		}
		else if (*temp_1 > *temp_2)
			return (*temp_1 - *temp_2);
		else if (*temp_1 < *temp_2)
			return (*temp_1 - *temp_2);
	}
	return (0);
}
