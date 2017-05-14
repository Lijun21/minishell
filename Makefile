# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwang <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/04 00:43:43 by lwang             #+#    #+#              #
#    Updated: 2017/05/04 00:43:45 by lwang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minishell

SRC = main.c minishell.c get_info.c free.c parse_line.c handle_quotes.c\
handle_buildin_cmd.c helper.c handle_env.c get_cmd_path.c prompt.c

OBJ = $(SRC:.c=.o)


CFLAGS = -Wall -Wextra -Werror -g -Ilibft

$(NAME): $(OBJ)
	make -C ./libft
	gcc $(CFLAGS) -o $(NAME) $(OBJ) -L libft/ -lft

all: $(NAME)

clean:
	make -C ./libft clean
	rm -f $(OBJ)

fclean:
	make -C ./libft fclean
	rm -f $(OBJ) $(NAME)

re: fclean $(NAME)
