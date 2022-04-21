/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:19:36 by tapulask          #+#    #+#             */
/*   Updated: 2022/03/31 09:13:24 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	num = (unsigned int)n;
	if ((num / 10) != 0)
		ft_putnbr_fd(num / 10, fd);
	num = (num % 10) + '0';
	write(fd, &num, 1);
}
