/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantas <tchantasarn@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 12:01:03 by tchantas          #+#    #+#             */
/*   Updated: 2026/09/05 12:01:03 by tchantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
    unsigned char	*ptr;

    ptr = b;
    while (len > 0)
    {
        *ptr = (unsigned char)c;
        ptr++;
        len--;
    }
    return (b);
}