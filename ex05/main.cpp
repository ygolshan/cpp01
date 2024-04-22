/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:07:49 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/16 19:16:12 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(void)
{
    Harl x;
    x.complain("DEBUG");
    x.complain("INFO");
    x.complain("WARNING");
    x.complain("ERROR");
    x.complain("yalda");
}
