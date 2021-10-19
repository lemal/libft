/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:19:36 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/18 13:19:38 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int	n, int	fd)
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
