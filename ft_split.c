/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:43:01 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/20 16:43:03 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	size_t	ft_local_word_count(char	const	*s, char	c)
{
	size_t	i;
	size_t	word_count;

	word_count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			if (i > 0)
				if (s[i - 1] != c)
					word_count++;
		i++;
	}
	if ((i > 0) && (s[i] == '\0'))
		if (s[i - 1] != c)
			word_count++;
	return (word_count);
}

static	size_t	ft_local_char_count(char	const	*s, char	c, size_t	start)
{
	size_t	i;
	size_t	char_count;

	i = start;
	char_count = 0;
	while ((s[i]) != c) || s[i])
	{
		if (s[i] != c)
			char_count++;
		i++;
	}
	return (char_count);
}

// char	**ft_split(char	const	*s, char	c)
// {
// 	char	**ptr_doubl_arr;
// 	size_t	word_count;
// 	size_t	alnum_count;

// 	word_count = ft_local_word_count(s, c);
// 	ptr_to_doubl_arr = (char **)malloc(sizeof(char) * (word_count + 1));
//	return (ptr_to_doubl_arr);
// }

int main(void)
{
	char	str[] = "4 is the  \2 fifth  or";

	printf("%zu\n", ft_local_word_count(str, ' '));
	printf("%zu\n", ft_local_char_count(str, ' ', 0));
	return (0);
}