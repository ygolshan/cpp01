/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:13:36 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/12 15:47:43 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_hpp
#define Zombie_hpp

#include<string>
#include<iostream>

const std::string GREEN = "\033[32m";

class Zombie
{
private:
    std::string name;
public:
    void announce( void );
    void set_name(std::string named);

    Zombie();
    ~Zombie();
};

Zombie* ZombieHorde( int N, std::string name );

#endif