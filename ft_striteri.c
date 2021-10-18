/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:15:58 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/18 13:16:02 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char	*s, void	(*f)(unsigned	int, char*))
{
	unsigned int	indx;

	indx = 0;
	while (s[indx])
	{
		f(indx, &s[indx]);
		indx++;
	}
}
