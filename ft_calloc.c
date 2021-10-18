/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:50:57 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/18 12:50:59 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "errno.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	if (size % count != 0)
	{
		errno = ENOMEM;
		return ((void *)0);
	}

}
