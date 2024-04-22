/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:25:01 by ygolshan          #+#    #+#             */
/*   Updated: 2023/11/18 18:25:28 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	
	if (argc != 4)
	{
		std::cout <<"error"<<std::endl;
		return (EXIT_FAILURE);
	}
	
	std::string		filename = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::ifstream	ifs(filename);
	std::ofstream	ofs(filename.append(".replace"));
	size_t			pos;
	std::string		line;

	if (ifs >> std::ws && ifs.peek() == EOF)
	{
		std::cout<<"error"<<std::endl;
		return (EXIT_FAILURE);
	}
	if (s1 == s2)
		std::cout<<"error"<<std::endl;
	if (ifs.is_open() && ifs.good() && ofs.good())
	{
		while (getline (ifs, line))
		{
			pos = line.find(s1);
			if (pos != std::string::npos)
			{
				line.erase(pos, s1.length());
				line.insert(pos, s2);
			}
			ofs << line << '\n';
		}
		ifs.close();
		ofs.close();
	}
	else 
		std::cout << "error" <<std::endl;
	return 0;
}