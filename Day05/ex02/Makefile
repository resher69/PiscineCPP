# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 17:22:00 by ebellon           #+#    #+#              #
#    Updated: 2022/04/03 14:56:01 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	BureaucratTest

PATH_OBJ	=	obj/

SRC			= 	Bureaucrat.cpp \
				AForm.cpp \
				ShrubberyCreationForm.cpp \
				TreeAsciiArtGenerator.cpp \
				RobotomyRequestForm.cpp \
				PresidentialPardonForm.cpp \
				PrintPresidentialPardon.cpp \
				main.cpp

INC			=	Bureaucrat.hpp \
				AForm.hpp \
				ShrubberyCreationForm.hpp \
				RobotomyRequestForm.hpp \
				PresidentialPardonForm.hpp

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