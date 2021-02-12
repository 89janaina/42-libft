/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janainas <janainas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 20:21:16 by janainas          #+#    #+#             */
/*   Updated: 2021/02/11 23:23:37 by janainas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ss1;
	unsigned char *ss2;

	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (*ss1 == *ss2 & n-- > 0)
	{
		ss1++;
		ss2++;
		if (n == 0)
			return (0);
	}
	if (*ss1 != *ss2)
	{
		return (*ss1 - *ss2);
	}
	return (0);
}
