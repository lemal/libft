/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:43:16 by tapulask          #+#    #+#             */
/*   Updated: 2022/03/31 09:14:30 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_local_strlen(char const *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

static	void	ft_local_write(char const *str,
					size_t current_loc, char *ptr_to_arr)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		ptr_to_arr[current_loc] = str[i];
		current_loc++;
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_1;
	size_t	len_2;
	char	*ptr_to_first;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	len_1 = ft_local_strlen(s1);
	len_2 = ft_local_strlen(s2);
	ptr_to_first = (char *)malloc(sizeof(char) * (len_1 + len_2) + 1);
	if (ptr_to_first == NULL)
		return (NULL);
	ft_local_write(s1, 0, ptr_to_first);
	ft_local_write(s2, len_1, ptr_to_first);
	ptr_to_first[len_1 + len_2] = '\0';
	return (ptr_to_first);
}
