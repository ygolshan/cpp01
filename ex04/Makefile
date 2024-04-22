# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 20:30:12 by ygolshan          #+#    #+#              #
#    Updated: 2023/11/17 20:31:24 by ygolshan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rep
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror 
SRC = main.cpp 
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