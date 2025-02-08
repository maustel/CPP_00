# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/06 11:57:15 by maustel           #+#    #+#              #
#    Updated: 2025/02/06 11:57:15 by maustel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phone

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++11
# FLAGS = -std=c++11

SRCS = main.cpp\
		Contact.cpp\
		PhoneBook.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\033[32m phone built successfully! \033[0m"

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "\033[34m cleaning up... \033[0m"
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

PHONY: clean, fclean, all, re
