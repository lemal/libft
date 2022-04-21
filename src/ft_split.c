/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:43:01 by tapulask          #+#    #+#             */
/*   Updated: 2022/03/31 09:23:11 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_local_word_count(char const *s, char c)
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

static	char	*ft_local_mem_trim(char	*ptr_long, size_t	size)
{
	char	*ptr_optimal;
	size_t	i;

	i = 0;
	ptr_optimal = (char *)malloc(sizeof(char) * (size + 1));
	if (ptr_optimal == NULL)
		return (ptr_optimal);
	while (ptr_long[i])
	{
		ptr_optimal[i] = ptr_long[i];
		i++;
	}
	ptr_optimal[i] = '\0';
	free(ptr_long);
	return (ptr_optimal);
}

static	void	ft_local_free_all(char	**ptr_to_first)
{
	size_t	i;

	i = 0;
	while (ptr_to_first[i])
	{
		free((char *)ptr_to_first[i]);
		i++;
	}
	free(ptr_to_first);
}

static	int	ft_local_subarr_fill(char const **s, char **ptr,
				char c, size_t subarr_num)
{
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = 0;
	while ((*s)[s_len])
		s_len++;
	ptr[subarr_num] = (char *)malloc(sizeof(char) * s_len + 1);
	if (ptr == NULL)
	{
		ft_local_free_all(ptr);
		return (-1);
	}
	while (**s == c)
		(*s)++;
	while ((*(*s) != c) && **s)
	{
		ptr[subarr_num][i] = **s;
		i++;
		(*s)++;
	}
	ptr[subarr_num][i] = '\0';
	ptr[subarr_num] = ft_local_mem_trim(ptr[subarr_num], i);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	s_len;
	size_t	word_count;
	char	**ptr;
	size_t	subarr_num;

	if (s == NULL)
		return (NULL);
	subarr_num = 0;
	s_len = 0;
	word_count = ft_local_word_count(s, c);
	while (s[s_len])
		s_len++;
	ptr = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (ptr == NULL)
		return (NULL);
	while (subarr_num < word_count)
	{
		if (ft_local_subarr_fill(&s, ptr, c, subarr_num) == -1)
			return (NULL);
		subarr_num++;
	}
	ptr[subarr_num] = NULL;
	return (ptr);
}
