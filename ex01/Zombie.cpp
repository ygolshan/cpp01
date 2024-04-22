/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:50:26 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/12 15:46:51 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::set_name(std::string named)
{
   name = named;
}

void Zombie::announce( void )
{
    std::cout << GREEN << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{     
}
Zombie::~Zombie()
{
    std::cout << GREEN << name << " destroyed"<<std::endl;
    
}
