# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agardet < agardet@student.42lyon.fr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 18:17:33 by agardet           #+#    #+#              #
#    Updated: 2022/04/05 18:17:33 by agardet          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

# =============== #
# === TARGETS === #
# =============== #

NAME		=	phonebook

## ~~ Folders ~~ ##

DDIR		=	deps/
ODIR		=	objs/

# =============== #
# === SOURCES === #
# =============== #

ESRC		=	main.cpp

CSRC		=	contact.cpp \
				phonebook.cpp

# TSRC		=	

## ~~ Folders ~~ ##

HDIR		=	incs/
SDIR		=	srcs/

# ==================== #
# === PLACEHOLDERS === #
# ==================== #

### ~~~ SOURCES ~~~ ###

SRCS		=	$(ESRC) $(CSRC)#$(TSRC)

### ~~~ TARGETS ~~~ ###

# EOBJ		=	$(ESRC:%.cpp=$(ODIR)%.o)
# COBJ		=	$(CSRC:%.cpp=$(ODIR)%.o)
# TOBJ		=	$(TSRC:%.tpp=$(ODIR)%.o)

# OBJS		=	$(EOBJ) $(COBJ)#$(TOBJ)
OBJS		=	$(SRCS:%.cpp=$(ODIR)%.o)

DEPS		=	$(SRCS:%.cpp=$(DDIR)%.d)

## ~~ Folders ~~ ##

SUBDIRS		=	$(ODIR) $(DDIR)

# ====================== #
# === VARIABLE PATHS === #
# ====================== #

### ~~~ SOURCES ~~~ ###

vpath %.hpp $(HDIR)
# vpath %.tpp $(SDIR)
vpath %.cpp $(SDIR)

### ~~~ TARGETS ~~~ ###

vpath %.o $(ODIR)

# ====================== #
# === COMPILER SETUP === #
# ====================== #

CC			=	g++

WRNFL		=	-std=c++98 -Wall -Wextra -Werror
DBGFL		=	-g
CINCS		=	$(addprefix -I, $(HDIR))
CFLGS		=	$(WRNFL) $(DBGFL)

DEPFL		=	-MT $@ -MMD -MP -MF $(DDIR)$*.d

# ============= #
# === RULES === #
# ============= #

# ~~~ Default ~~~ #

all			:	$(SUBDIRS) $(NAME)

$(SUBDIRS)	:
				mkdir -p $(SUBDIRS)

# ~~~ Objects Compiling  ~~~ #

$(ODIR)%.o	:	%.cpp $(DDIR)%.d
				$(CC) $(CFLGS) $(CINCS) $(DEPFL) -c $< -o $@

# ~~~ Executables Compiling  ~~~ #

$(NAME)		:	$(OBJS)
				$(CC) $^ -o $@

# ~~~ Actions ~~~ #

bonus		:	all

norm		:
				norminette incs srcs

clean		:
				rm -rf $(ODIR)

fclean		:	clean
				$(RM) $(NAME)
				rm -rf $(DDIR)

re			:	fclean all

.PHONY : all norm clean fclean re#bonus

$(DEPS)		:
include $(wildcard $(DEPS))