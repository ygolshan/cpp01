/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:15:31 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/12 15:45:59 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* ZombieHorde( int N, std::string name )
{
    Zombie *newz;
    newz = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        newz[i].set_name(name);
        newz[i].announce();
    }
    return(newz);
    
}