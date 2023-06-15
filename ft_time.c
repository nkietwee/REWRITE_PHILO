/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_time.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:34:52 by nkietwee          #+#    #+#             */
/*   Updated: 2023/06/14 21:42:47 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

long    ft_currentime()
{
    struct timeval time;
    
    gettimeofday(&time, NULL);
    return ((time.tv_sec * 1000) + (time.tv_usec / 1000));  
}

int ft_gettime(int time, int check_state)
{
    int time_cur;

    time_cur = ft_currentime();
    while (!(check_state) && ft_currentime() - time_cur < time)
        usleep(100);
    return(check_state);
}