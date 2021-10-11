/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@studet.21-school>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:52:22 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/08 11:52:24 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const	char	*s, int	c)
{
	char	x;

	x = (char)c;
	while (*s)
	{
		if (*s == x)
			return ((char *)s);
		s++;
	}
	if (x == *s)
		return ((char *)s);
	return ((void *)0);
}
