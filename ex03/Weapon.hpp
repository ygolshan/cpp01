/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:48:37 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/16 11:54:24 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef Weapon_hpp
#define Weapon_hpp
#include <string>
#include <iostream>


class Weapon
{
private:
    std::string type;
public:
    void setType(std::string ty);
    std::string  const &getType();
    Weapon(std::string ty);
    ~Weapon();
};

#endif