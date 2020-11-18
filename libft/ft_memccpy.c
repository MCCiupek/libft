/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek </var/mail/mciupek>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 20:08:33 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/18 13:51:01 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void *src, int ch, unsigned int size)
{
	if (!ch)
		ft_memcpy(dest, src, size);
	while (size-- && *((char *)src - 1) != (char)ch)
		ft_memset(dest++, *((char *)src++), 1);
	return (ft_strchr(dest, ch));
}
