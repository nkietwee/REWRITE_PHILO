/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 03:48:50 by nkietwee          #+#    #+#             */
/*   Updated: 2023/06/14 20:39:28 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void    ft_initdata(t_data data, int ac, char **av)
{
    data.nbr_philo = ft_atoi(av[1]);
    data.time_die = ft_atoi(av[2]);
    data.time_eat = ft_atoi(av[3]);
    data.time_sleep = ft_atoi(av[4]);
    if (ac == 6)
        data.nbr_eat = ft_atoi(av[5]);
    else   
        data.nbr_eat = -1;
    data.check_state = NOTDIE; //
    data.start_time = 0;
} 

t_philo *ft_initphilo(t_data *data, int nbr_philo)
{
    int i;
    t_philo *philo;

    i = 0;
    philo = malloc(sizeof(t_philo) * nbr_philo);
    if (!philo)
        // return (NULL);
    while (i < nbr_philo)
    {
        philo[i].id = i + 1;
        philo[i].myfork = i;
        philo[i].notmyfork = (i + 1) % nbr_philo;
        philo[i].data = data;
        philo[i].start_meal = 0; 
        i++;
    }
    return (philo);
}

pthread_mutex_t *ft_initfork(int nbr_philo)
{
    int i;
    pthread_mutex_t *fork;
    
    i = 0;
    fork = malloc(sizeof(pthread_mutex_t) * nbr_philo);
    if (!fork)
        return (NULL);
    while (i < nbr_philo)
    {
        fork = pthread_mutex_init(&fork[i] , NULL);
        i++;
    }
    return (fork);
}

void    ft_init(t_main *main, int ac, char **av)
{
    ft_initdata(main->data, ac, av);
    if (main->data.nbr_philo == 0)
        return ;
    main->philo = ft_initphilo(&main->philo, main->data.nbr_philo);
    main->fork = ft_initfork(main->data.nbr_philo);
    pthread_mutex_init(main->print, NULL);
}