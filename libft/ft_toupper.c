/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <mciupek@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 18:31:44 by mciupek           #+#    #+#             */
/*   Updated: 2020/11/16 18:51:42 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_toupper(char str)
{
	if (str >= 'a' && str <= 'z')
		str = str - 32;
	return (str);
}
