# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 17:34:52 by ygolshan          #+#    #+#              #
#    Updated: 2023/11/16 12:05:16 by ygolshan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror 
SRC = Weapon.cpp main.cpp HumanA.cpp HumanB.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) $(CXXFLAGS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re