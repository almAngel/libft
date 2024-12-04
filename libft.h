/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angellop <angellop@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 12:56:55 by angellop          #+#    #+#             */
/*   Updated: 2024/12/04 21:14:11 by angellop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>

// WORKING 3/12/2024
void		ft_bzero(void *buff, size_t n);

// Not returning same value
int			ft_isalnum(int c);

// Not returning same value
int			ft_isalpha(int c);

// WORKING 3/12/2024
int			ft_isascii(int c);

// Not returning same value
int			ft_isdigit(int c);

// Not returning same value
int			ft_isprint(int c);

// WORKING 4/12/2024
void		*ft_memcpy(void *buff, const void *src, size_t count);

// WORKING 4/12/2024
void		*ft_memmove(void *buff, const void *src, size_t count);

// WORKING 3/12/2024
void		*ft_memset(void *buff, int c, size_t count);

// WORKING 3/12/2024
size_t		ft_strlen(const char *str);

// WORKING 4/12/2024
size_t		ft_strlcat(char *dest, const char *src, size_t size);

// WORKING 4/12/2024
size_t		ft_strlcpy(char *dest, const char *src, size_t size);

#endif