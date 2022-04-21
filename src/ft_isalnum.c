/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:51:33 by tapulask          #+#    #+#             */
/*   Updated: 2022/03/31 09:11:37 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	alph;
	int	dig;

	alph = ft_isalpha(c);
	dig = ft_isdigit(c);
	if (!(alph) && !(dig))
		return (0);
	return (c);
}
