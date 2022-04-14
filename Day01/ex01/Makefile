# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/09 21:26:11 by agardet           #+#    #+#              #
#    Updated: 2022/04/09 21:26:11 by agardet          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		=	horde

PATH_OBJ	=	obj/

SRC			=	main.cpp \
				Zombie.cpp \
				zombieHorde.cpp

INC			=	Zombie.hpp

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