/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janainas <janainas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 20:21:20 by janainas          #+#    #+#             */
/*   Updated: 2021/02/11 23:01:02 by janainas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void        *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *a;
	char *b;

	a = (char*)src;
	b = (char*)dst;
	while (n--)
	{
		*b++ = *a++;
	}
	return (dst);
}
