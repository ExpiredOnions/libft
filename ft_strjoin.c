/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantas <tchantasarn@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 19:21:13 by tchantas          #+#    #+#             */
/*   Updated: 2026/09/05 19:22:49 by tchantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*result;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	result = (char *)malloc((l1 + l2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, l1 + 1);
	ft_strlcpy(result + l1, s2, l2 + 1);
	return (result);
}
