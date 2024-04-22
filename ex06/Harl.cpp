/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:42:45 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/18 18:32:32 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void  Harl::info( void )
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void  Harl::warning( void )
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;    
}
void Harl::error( void )
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    int lev = 4;
    std::string input[4]={"DEBUG", "INFO" , "WARNING", "ERROR"};
    void (Harl::*text[4])(void) = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
    
    for(int i = 0; i < 4; i++)  
    {  
        if(level == input[i])
        {
            lev = i;
            break;
        }
    }

    switch (lev)
    {
        case 0: 
            (this->*text[0])();
        case 1: 
            (this->*text[1])();
        case 2:
            (this->*text[2])();
        case 3:
            (this->*text[3])();
            break;
        case 4:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;    
                    
    }
}

Harl::Harl()
{
}

Harl::~Harl()
{
}