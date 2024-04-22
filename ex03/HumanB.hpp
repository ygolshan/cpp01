/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:32:23 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/16 11:59:08 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HumanB_hpp
#define HumanB_hpp
#include <string>
#include <iostream>
#include "Weapon.hpp"



class HumanB
{
private:
    std::string B;
    Weapon *wtypeB;
public:
    void setWeapon(Weapon &wp);
    void attack();
    HumanB(std::string thu);
    ~HumanB();
};

#endif