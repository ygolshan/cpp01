/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:42:57 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/18 18:19:27 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef Harl_hpp
#define Harl_hpp
#include <string>
#include <iostream>

class Harl
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    void complain( std::string level);
    Harl();
    ~Harl();
};

#endif