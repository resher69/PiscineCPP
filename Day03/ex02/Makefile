# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/13 18:59:35 by agardet           #+#    #+#              #
#    Updated: 2022/04/15 21:59:25 by agardet          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		=	FragTrap

PATH_OBJ	=	obj/

SRC			= 	ClapTrap.cpp \
				ScavTrap.cpp \
				FragTrap.cpp \
				main.cpp

INC			=	ClapTrap.hpp \
				ScavTrap.hpp \
				FragTrap.hpp

OBJ			=	$(addprefix $(PATH_OBJ), $(SRC:.cpp=.o))

CPPC		=	c++
CPPFLAG		=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf

all :		$(NAME)

$(NAME) :	$(OBJ) $(INC)
			$(CPPC) $(CPPFLAG) $(OBJ) -o $@

re :		fclean all

$(PATH_OBJ)%.o :	%.cpp $(INC)
					@mkdir -p $(PATH_OBJ)
					$(CPPC) $(CPPFLAG) -c $< -o $@

clean :
			$(RM) $(PATH_OBJ)

fclean :		
			$(RM) $(PATH_OBJ) $(NAME)

.PHONY:		all clean fclean re