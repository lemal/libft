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

static	size_t	ft_local_char_count(char	const	*s, char	c, size_t	i)
{
	size_t	j;

	j = 0;
	while ((s[i] == c) && s[i])
		i++;
	while ((s[i] != c) && s[i])
	{
		i++;
		j++;
	}
	return (j);
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

// static	void	ft_local_subarr_cpy(char	const	*s, char	*ptr_to_first, char	c, size_t	i)
// {
// 	size_t	k;

// 	k = 0;
// 	while ((s[i] == c) && s[i])
// 		i++;
// 	while ((s[i] != c) && s[i])
// 	{
// 		ptr_to_first[k] = s[i];
// 		i++;
// 		k++;
// 	}
// }

char	**ft_split(char	const	*s, char	c)
{
	char	**ptr_doubl_arr;
	size_t	word_count;
	size_t	alnum_count;
	// size_t	index;
	size_t	i;

	i = 0;
	word_count = ft_local_word_count(s, c);
	ptr_doubl_arr = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (ptr_doubl_arr == NULL)
		return (NULL);
	// index = 0;
	alnum_count = ft_local_char_count(s, c, 0);
	ptr_doubl_arr[0] = (char *)malloc(sizeof(char) * (alnum_count + 1));
	if (ptr_doubl_arr[0] == NULL)
	{
		ft_local_free_all(ptr_doubl_arr);
		return (NULL);
	}
	*ptr_doubl_arr[0] = 'H';
	*ptr_doubl_arr[1] = '\0';
	//ft_local_subarr_cpy(s, *ptr_doubl_arr, c, 0);
	printf("%zu\n%zu\n", alnum_count, word_count);
	return (ptr_doubl_arr);
}

int main(void)
{
	// size_t	i;
	// char	**ptr;
	// char	*str = "           ";

	// i = 0;
	// ptr = ft_split(str, ' ');
	// while(i == 0)
	// {
	// 	printf("%s", ptr[i]);
	// 	i++;
	// }
	printf("%s", *ft_split("  HELLO  World", ' '));
	return (0);
}

/*
char	**ft_split(char	const	*s, char	c)
{
	char	**ptr_doubl_arr;
	size_t	word_count;
	size_t	alnum_count;
	size_t	index;
	size_t	i;

	i = 0;
	word_count = ft_local_word_count(s, c);
	ptr_doubl_arr = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (ptr_doubl_arr == NULL)
		return (NULL);
	index = 0;
	while (s[index])
	{
		alnum_count = ft_local_char_count(s, c, index);
		ptr_doubl_arr[i] = (char *)malloc(sizeof(char) * (alnum_count + 1));
		if (ptr_doubl_arr[i] == NULL)
		{
			ft_local_free_all(ptr_doubl_arr);
			return (NULL);
		}
		ft_local_subarr_cpy(s, ptr_doubl_arr[i], c, alnum_count);
		index++;
		i++;
	}
	ptr_doubl_arr[i] = NULL;
	return (ptr_doubl_arr);
}

static	size_t	ft_local_char_count(char	const	*s, char	c, size_t	*i)
{
	size_t	j;

	j = 0;
	while ((s[*i] == c) && s[*i])
	{
		*i++;
		j++;
	}
	while ((s[*i] != c) && s[*i])
		*i++;
	return (*i - j);
}


char	**ft_split(char	const	*s, char	c)
{
	char	**ptr_doubl_arr;
	size_t	word_count;
	size_t	alnum_count;
	size_t	index;
	size_t	i;

	i = 0;
	word_count = ft_local_word_count(s, c);
	ptr_to_doubl_arr = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (ptr_to_doubl_arr == NULL)
		return (NULL);
	index = 0;
	while (s[index])
	{
		alnum_count = ft_local_char_count(s, c, &index);
		ptr_to_doubl_arr[i] = (char *)malloc(sizeof(char) * (alnum_count + 1));
		// if (*ptr_to_doubl_arr == NULL)
		// {
		// 	ft_local_free_all(ptr_to_doubl_arr, word_count);
		// 	return (NULL);
		// }
		ft_local_fill_curr(ptr_doubl_arr[i], s, c, alnum_count);
		index++;
		i++;
	}
	ptr_to_doubl_arr[i] = NULL;
	return (ptr_to_doubl_arr);
}

static	size_t	ft_local_char_count(char	const	*s, char	c, size_t	*start)
{
	size_t	j;
	size_t	*i;

	j = 0;
	*i = *start;
	while ((s[*i] == c) && s[*i])
	{
		*i++;
		j++;
	}
	while ((s[*i] != c) && s[*i])
		*i++;
	return (*i - j);
}
*/