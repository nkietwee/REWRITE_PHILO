/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 03:24:26 by nkietwee          #+#    #+#             */
/*   Updated: 2023/06/14 21:45:01 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <pthread.h>
# include <sys/time.h>

enum state
{
    NOTDIE
    ,DIE
};

enum fork
{
    TAKE
    ,DROP
};

enum    print
{
    MYFORK
    ,NOTMYFORK
    ,EAT
    ,SLEEP
    ,THINK    
    
};

typedef struct s_data
{
    int nbr_philo;
    int time_die;
    int time_eat;
    int time_sleep;
    int         nbr_eat; // option
    int         check_state; // for check die
    int         start_time;
    pthread_t   print;
} t_data;

typedef struct s_philo
{
    int id; // start at 1
    int myfork;
    int notmyfork;
    int start_meal;
    int nbr_ate;
    t_data *data;
    
} t_philo;

typedef struct s_main
{
    t_philo *philo;
    pthread_t *fork;
    pthread_t *print;
    t_data  data;

} t_main;

#endif