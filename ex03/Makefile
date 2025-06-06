# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/02 12:20:04 by athonda           #+#    #+#              #
#    Updated: 2025/06/06 09:42:09 by athonda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Intern

SRC_DIR =	.
SRC_F	=	main.cpp \
			Bureaucrat.cpp \
			AForm.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \
			Intern.cpp

SRC = $(SRC_F:%.c=$(SRC_DIR)/%.c)

OBJ_DIR = obj
OBJ =	$(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRC_F))

INC_DIR =	.
DEP = $(wildcard $(patsubst %.cpp,$(INC_DIR)/%.hpp,$(SRC_F)))

IFLAGS = -I$(INC_DIR)
CFLAGS = -g -std=c++98 -Wall -Werror -Wextra
CC = c++

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(DEP)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

.PHONY: all clean fclean re

all: $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm $(NAME)

re: fclean all
