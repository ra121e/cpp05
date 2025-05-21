# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/21 10:36:00 by athonda           #+#    #+#              #
#    Updated: 2025/05/21 10:38:12 by athonda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

SRC_DIR = src
SRC_F	=	main.cpp \
			Bureaucrat.cpp

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
