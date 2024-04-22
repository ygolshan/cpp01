/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:34:55 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/16 11:59:21 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(std::string ty):type(ty)
{
    
}
Weapon::~Weapon()
{
    
}
void Weapon::setType(std::string ty)
{
    type = ty;
}
 std::string  const &Weapon::getType()
{
        return(type);
}
