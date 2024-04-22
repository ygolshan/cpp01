# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 17:09:14 by ygolshan          #+#    #+#              #
#    Updated: 2023/11/16 19:05:44 by ygolshan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror 
SRC = main.cpp Harl.cpp 
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