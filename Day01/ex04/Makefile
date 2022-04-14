# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/10 21:36:12 by agardet           #+#    #+#              #
#    Updated: 2022/04/10 21:36:12 by agardet          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


NAME		=	mySed
PATH_OBJ	=	obj/
SRC			= 	main.cpp
OBJ			=	$(addprefix $(PATH_OBJ), $(SRC:.cpp=.o))

CPPC		=	c++
CPPFLAG		=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf

all :		$(NAME)

$(NAME) :	$(OBJ)
			$(CPPC) $(CPPFLAG) $(OBJ) -o $@

re :		fclean all

$(PATH_OBJ)%.o :	%.cpp
					@mkdir -p $(PATH_OBJ)
					$(CPPC) $(CPPFLAG) -c $< -o $@

clean :
			$(RM) $(PATH_OBJ)

fclean :		
			$(RM) $(PATH_OBJ) $(NAME)

.PHONY:		all clean fclean re