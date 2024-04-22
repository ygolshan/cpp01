# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/11 11:44:52 by ygolshan          #+#    #+#              #
#    Updated: 2023/11/12 12:42:52 by ygolshan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror 
SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
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