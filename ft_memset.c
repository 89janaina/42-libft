/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janainas <janainas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 19:42:44 by janainas          #+#    #+#             */
/*   Updated: 2021/02/11 19:53:30 by janainas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION:The memset() function writes len bytes of value c (converted to an unsigned char) to the string b.
** RETURN VALUES: The memset() function returns its first argument.
*/

void    *ft_memset(void *b, int c, size_t len)
{
    char *a;

    a = (char *)b;
    while (len > 0)
    {
        *a++ = (char)c;
        len--;
    }
    return (b);
}
