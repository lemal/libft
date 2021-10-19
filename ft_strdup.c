/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:51:14 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/18 12:51:16 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

char	*ft_strdup(const	char	*s1)
{
	int		count;
	char	*ptr_to_first;

	count = 0;
	ptr_to_first = NULL;
	while (s1[count])
		count++;
	ptr_to_first = malloc(sizeof(char) * (count + 1));
	if (ptr_to_first == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	count = 0;
	while (s1[count])
	{
		ptr_to_first[count] = s1[count];
		count++;
	}
	ptr_to_first[count] = '\0';
	return (ptr_to_first);
}
