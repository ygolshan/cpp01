/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:35:55 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/16 12:01:07 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string thu, Weapon &y): A(thu), wtypeA(y)
{
}
HumanA::~HumanA()
{
}
void HumanA::attack()
{
    std::cout<< A << "attacks with their" << wtypeA.getType()<< std::endl;
}