/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:43:36 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/20 16:43:38 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_local_str_check(char	const	*s1, char	const	*set,
				size_t	*flag_start, size_t	*flag_end)
{
	size_t	i;

	i = 0;
	while (s1[i] && (flag_start != 1))
	{
		while ((s1[i] == set[i]) && set[i])
		{

		}
	}
}

static	char	*ft_local_malloc_fill(char	const	*str, size_t	*flag_start,
				size_t	*flag_end)
{

}

char	*ft_strtrim(char	const	*s1, char	const	*set)
{
	char	*ptr_to_first;
	size_t	*flag_start;
	size_t	*flag_end;

	flag_start = 0;
	flag_end = 0;
	ft_local_str_check(s1, set, &flag_start, &flag_end);
	ptr_to_first = ft_local_malloc_fill(s1, &flag_start, &flag_end);
	return (ptr_to_first);
}
