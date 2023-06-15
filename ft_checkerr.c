/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkerr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 04:01:24 by nkietwee          #+#    #+#             */
/*   Updated: 2023/06/14 04:16:56 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int ft_isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

int ft_checknbr(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    j = 0;
    while (i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            if (!ft_isdigit(av[i][j]))
                return (EXIT_FAILURE);
            j++;
        }
        i++;
    }
    return (EXIT_SUCCESS);
}

int ft_checkerr(int ac, char **av)
{
    if (ac != 5 && ac != 6)
        return (EXIT_FAILURE);
    if (!ft_checknbr(ac, av))
        return (EXIT_FAILURE);    
}
