/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tapulask <tapulask@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:36:44 by tapulask          #+#    #+#             */
/*   Updated: 2021/10/07 10:36:46 by tapulask         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

int		ft_isalpha(int	c);
int		ft_isdigit(int	c);
int		ft_isalnum(int	c);
int		ft_isascii(int	c);
int		ft_isprint(int	c);
size_t	ft_strlen(const	char	*s);
void	*ft_memset(void	*b, int	c, size_t	len);
int		ft_toupper(int	c);
int		ft_tolower(int	c);
int		ft_atoi(const	char	*str);
char	*ft_itoa(int	n);
#endif
