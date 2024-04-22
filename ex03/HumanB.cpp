/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:32:09 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/16 12:00:07 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string thc)
{
    B = thc;
}
HumanB::~HumanB()
{
    
}
void HumanB::setWeapon(Weapon &wp)
{
        this->wtypeB = &wp;
}
void HumanB::attack()
{
    std::cout<< B << "attacks with their" << wtypeB->getType()<< std::endl;
}