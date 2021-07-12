# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abiari <abiari@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/12 13:07:32 by abiari            #+#    #+#              #
#    Updated: 2021/07/12 15:06:13 by abiari           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ZombieHorde
CC = clang++
CFLAGS = -Wall -Werror -Wextra -g3
SRC = main.cpp Zombie.cpp ZombieHorde.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re : fclean all

.PHONY: clean fclean all re
