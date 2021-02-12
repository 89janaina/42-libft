/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janainas <janainas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 20:21:23 by janainas          #+#    #+#             */
/*   Updated: 2021/02/11 23:14:39 by janainas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *source, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	i = 0;
	s = (char *)source;
	d = (char *)dest;
	if (s < d)
	{
		while (len)
		{
			len--;
			*(d + len) = *(s + len);
		}
	}
	else
	{
		while (i < len)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	return (dest);
}
