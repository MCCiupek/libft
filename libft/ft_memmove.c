/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek </var/mail/mciupek>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 13:51:38 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/18 14:00:50 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, unsigned int size)
{
	char	tmp[size];

	ft_memcpy((void *)&tmp, src, size);
	ft_memcpy(dest, (void *)&tmp, size);
	return (dest);
}
