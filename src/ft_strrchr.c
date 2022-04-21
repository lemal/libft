/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:54:39 by tapulask          #+#    #+#             */
/*   Updated: 2022/03/31 09:15:39 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	temp;

	temp = (char)c;
	c = 0;
	while (s[c])
		c++;
	while (c >= 0)
	{
		if (s[c] == temp)
			return ((char *)&s[c]);
		c--;
	}
	return ((void *)0);
}
