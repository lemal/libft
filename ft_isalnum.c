/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:51:33 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/07 10:51:37 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int	c)
{
	int	alph;
	int	dig;

	alph = ft_isalpha(c);
	dig = ft_isdigit(c);
	if (!(alph) && !(dig))
		return (0);
	return (c);
}
