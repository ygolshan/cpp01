/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:17:40 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/12 18:19:37 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>

int main(void)
{
    std::string str;
    str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string &stringREF = str;

    


    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF<< std::endl;
    
}