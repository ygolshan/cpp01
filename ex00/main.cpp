/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:38:06 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/12 12:45:14 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *Zombie_heap;
    Zombie_heap = newZombie("heap_foo");
    delete Zombie_heap;
    
    randomChump("stack_foo");
}