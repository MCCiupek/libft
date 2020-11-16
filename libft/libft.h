/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <mciupek@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:53:22 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/16 19:10:25 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	ft_atoi(char	*str);
int	ft_strlen(char	*str);
int	ft_isalpha(char	str);
int	ft_isdigit(char	str);
int	ft_isalnum(char	str);
int	ft_isascii(char	str);
int	ft_isprint(char	str);
char	ft_toupper(char	str);
char	ft_tolower(char	str);
char	*ft_strchr(char *str, char c);
char	*ft_strrchr(char *str, char c);

#endif
