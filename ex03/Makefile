# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugo-mar <hugo-mar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/15 20:10:43 by hugo-mar          #+#    #+#              #
#    Updated: 2025/07/16 11:02:47 by hugo-mar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS_PATH = ./srcs/

SRCS = $(SRCS_PATH)ClapTrap.cpp $(SRCS_PATH)ScavTrap.cpp \
	   $(SRCS_PATH)FragTrap.cpp $(SRCS_PATH)DiamondTrap.cpp \
	   $(SRCS_PATH)main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re