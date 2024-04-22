/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:38:43 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/12 12:59:41 by ygolshan         ###   ########.fr       */
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

    Zombie(std::string name);
    ~Zombie();
};

Zombie* newZombie( std::string name );
void  randomChump( std::string name );

#endif