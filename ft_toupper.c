/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:52:49 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/07 12:52:53 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int	c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}