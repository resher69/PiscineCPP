# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/11 21:38:49 by agardet           #+#    #+#              #
#    Updated: 2022/04/11 21:38:51 by agardet          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		=	harl

PATH_OBJ	=	obj/

SRC			=	main.cpp \
				Harl.cpp

INC			=	Harl.hpp

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