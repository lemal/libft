/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:02:17 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/07 15:02:19 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static	void	ft_local_filler(int	n, char	*mmryspace, int	index)
{
	unsigned int	num;

	if (n < 0)
	{
		mmryspace[index] = '-';
		index++;
		n *= -1;
	}
	num = (unsigned int)n;
	if ((num / 10) != 0)
		ft_local_filler(num / 10, mmryspace, index + 1);
	mmryspace[index] = (num % 10) + '0';
}

char	*ft_itoa(int	n)
{
	int		i;
	int 	cpy_n;
	char	*ptr_to_first;

	i = 0;
	cpy_n = n;
	while (cpy_n != 0)
	{
		cpy_n = cpy_n / 10;
		i++;
	}
	ptr_to_first = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr_to_first == NULL)
		return (NULL);
	ft_local_filler(n, ptr_to_first, 0);
	return (ptr_to_first);
}

int main (void)
{
	printf("%s", ft_itoa(-12252333));
	return (0);
}
/*
static	void	ft_local_filler(int	n, char	*mmryspace, int	index)
{
	unsigned int	num;

	if (n < 0)
	{
		mmryspace[index] = '-';
		index++;
		n *= -1;
	}
	num = (unsigned int)n;
	if ((num / 10) != 0)
		ft_local_filler(num / 10, mmryspace, index + 1);
	mmryspace[index] = (num % 10) + '0';
}

char	*ft_itoa(int	n)
{
	int		i;
	int 	cpy_n;
	char	*ptr_to_first;

	i = 0;
	cpy_n = n;
	while (cpy_n != 0)
	{
		cpy_n = cpy_n / 10;
		i++;
	}
	ptr_to_first = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr_to_first == NULL)
		return (NULL);
	ft_local_filler(n, ptr_to_first, 0);
	return (ptr_to_first);
}

int main (void)
{
	printf("%s", ft_itoa(-12252333));
	return (0);
}
*/