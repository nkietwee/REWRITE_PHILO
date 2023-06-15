/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:31:39 by nkietwee          #+#    #+#             */
/*   Updated: 2023/06/14 20:47:26 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void    ft_print(int mode, t_philo *philo)
{
    long time;

    pthread_mutex_lock(philo->data->print);
    time = ft_currentime() - philo->data->start_time;
    printf("%d ms Philo %d ", time, philo->id);
    if (mode == MYFORK)
        printf("take my fork\n");
    else if (mode == NOTMYFORK)
        printf("take not my fork\n");
    else if (mode == EAT)
        printf("take not my fork\n");
    else if (mode == SLEEP)
        printf("sleep\n");
    else if (mode == THINK)
        printf("think\n");
    pthread_mutex_unlock(philo->data->print);
}