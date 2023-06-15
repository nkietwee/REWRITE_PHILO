/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cretethread.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:49:13 by nkietwee          #+#    #+#             */
/*   Updated: 2023/06/15 16:00:35 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void    ft_takeanddrop(int mode)
{
    if (mode == TAKE)
    {
        // pthread_mutex_lock();        
    }
    // else if (mode == DROP)
    // {



    // }
    
    
}

int    ft_eat(t_philo *philo)
{
    ft_takeanddrop(TAKE);
    ft_print(MYFORK);
    philo->nbr_ate++;
    ft_gettime(philo->data->time_eat);
    ft_takeanddrop(DROP);
    return (EXIT_SUCCESS); 
}

void    *routine(t_philo *philo)
{
    while (!philo->data->check_state)
    {
        if (ft_eat(philo) == EXIT_FAILURE)
            return (EXIT_FAILURE);
        
        // ft

        
    }
    //eat
    // ft_eat
    //sleep
    //think

}

void    ft_cretethread(t_main *main)
{
    int i;
    int nbr_philo;
    
    i = 0;
    nbr_philo = main->data.nbr_philo;
    main->data.start_time = ft_currenttime();
    while (i < nbr_philo)
    {
        if (pthread_create(&main->philo[i], NULL, routine, main->philo))     
            break;
        if (pthread_detach(&main->philo[i]))
            break;
        i += 2;
        if (i > nbr_philo)
            i = 1;
    }

    
}