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
void	ft_bzero(void	*s, size_t	n);
void	*ft_memcpy(void	*dst, const	void	*src, size_t	n);
void	*ft_memmove(void	*dst, const	void	*src, size_t	len);
size_t	ft_strlcpy(char	*dst, const	char	*src, size_t	dstsize);
size_t	ft_strlcat(char	*dst, const	char	*src, size_t	dstsize);
int		ft_toupper(int	c);
int		ft_tolower(int	c);
char	*ft_strchr(const	char	*s, int	c);
char	*ft_strrchr(const	char	*s, int	c);
int		ft_strncmp(const	char	*s1, const	char	*s2, size_t	n);
void	*ft_memchr(const	void	*s, int	c, size_t	n);
int		ft_memcmp(const	void *s1, const	void	*s2, size_t	n);
char	*ft_strnstr(const	char	*haystack,
			const	char	*needle, size_t	len);
int		ft_atoi(const	char	*str);
void	*ft_calloc(size_t	count, size_t	size);
char	*ft_strdup(const	char	*s1);
void	ft_striteri(char	*s, void	(*f)(unsigned	int, char*));
void	ft_putchar_fd(char	c, int	fd);
void	ft_putstr_fd(char	*s, int	fd);
void	ft_putendl_fd(char	*s, int	fd);
void	ft_putnbr_fd(int	n, int	fd);
char	*ft_itoa(int	n);
#endif
