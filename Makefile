# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/14 03:25:12 by nkietwee          #+#    #+#              #
#    Updated: 2023/06/14 03:41:07 by nkietwee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

CC = cc

# CFLAGS = -Wall -Werror -Wextra -ptheread
CFLAGS = -Wall -Werror -Wextra

SRCS = ft_philo.c\

OBJS = $(SRCS:.o=.c)

%.o:%.c
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 

