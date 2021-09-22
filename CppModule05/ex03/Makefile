# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/14 10:55:48 by abiari            #+#    #+#              #
#    Updated: 2021/09/22 12:24:36 by abiari           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form
CC = clang++
CFLAGS = -Wall -Werror -Wextra -g3
SRC = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp\
		RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re : fclean all

.PHONY: clean fclean all re
