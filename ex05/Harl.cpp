/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 19:14:00 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/16 19:16:26 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

void Harl::complain( std::string level )
{
    std::string input[4]={"DEBUG", "INFO" , "WARNING", "ERROR"};
    void (Harl::*text[4])(void) = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
        
    for (int i = 0; i < 4; i++)
    {
        if (level == input[i])
        {
           (this->*text[i])();
            return;
        }   
    }
    std::cout<< "wrong input"<< std::endl << "you can choose DEBUG, INFO , WARNING, ERROR "<< std::endl;
    return;
}
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
Harl::Harl()
{
}

Harl::~Harl()
{
}