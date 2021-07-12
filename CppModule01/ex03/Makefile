# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/12 13:07:32 by abiari            #+#    #+#              #
#    Updated: 2021/07/12 20:09:25 by abiari           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Violence
CC = clang++
CFLAGS = -Wall -Werror -Wextra -g3
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re : fclean all

.PHONY: clean fclean all re
