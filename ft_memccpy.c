/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janainas <janainas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 20:21:10 by janainas          #+#    #+#             */
/*   Updated: 2021/02/11 23:05:17 by janainas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void        *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char *a;
	unsigned char *b;

	a = (unsigned char*)src;
	b = (unsigned char*)dst;
	while (n-- > 0)
	{
		*b = *a;
		if (*a == (unsigned char)c)
			return ((void*)b + 1);
		a++;
		b++;
	}
	return (NULL);
}
