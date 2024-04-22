/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:36:38 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/16 12:04:43 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HumanA_hpp
#define HumanA_hpp
#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string A;
    Weapon &wtypeA;
    
public:
    HumanA(std::string thu, Weapon &y);
    void attack();
    ~HumanA();

};

#endif