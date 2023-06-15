/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 03:52:33 by nkietwee          #+#    #+#             */
/*   Updated: 2023/06/14 03:55:14 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int ft_atoi(char *str)
{
    int     i;
    long    res;
    
    i = 0;
    res = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + str[i] - 48 ;
        i++;
        if (res > 2147483647)
            return (EXIT_FAILURE);
    }
    return (res);
}