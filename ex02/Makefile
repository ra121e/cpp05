# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/31 11:27:08 by athonda           #+#    #+#              #
#    Updated: 2025/06/02 09:29:21 by athonda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

SRC_DIR = src
SRC_F	=	main.cpp \
			Bureaucrat.cpp \
			AForm.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp

SRC = $(SRC_F:%.c=%.c)

OBJ_DIR = obj
OBJ =	$(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRC_F))

INC_DIR = inc
DEP = $(wildcard $(patsubst %.cpp,%.hpp,$(SRC_F)))

IFLAGS = -Iinc
CFLAGS = -g -std=c++98 -Wall -Werror -Wextra
CC = c++

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp $(DEP)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re

all: $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm $(NAME)

re: fclean all
