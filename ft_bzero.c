/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@studet.21-school>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 09:40:14 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/08 09:40:17 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void	*s, size_t	n)
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
