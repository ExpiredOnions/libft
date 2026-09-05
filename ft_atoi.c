/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchantas <tchantasarn@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/05 11:14:09 by tchantas          #+#    #+#             */
/*   Updated: 2026/09/05 11:14:09 by tchantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_atoi(const char *str)
{
    int	sign;
    int num;

    sign = 1;
    num = 0;
    while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
        str++;
    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        num = (num * 10) + (*str - '0');
        str++;
    }
    return (num * sign);
}