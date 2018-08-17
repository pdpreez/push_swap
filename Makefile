# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppreez <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/27 13:50:11 by ppreez            #+#    #+#              #
#    Updated: 2018/08/07 13:20:52 by ppreez           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHECK = checker
PUSHSWAP = push_swap

SRC_PATH = ./src/
OBJ_PATH = ./obj/
INC_PATH = ./includes/
LIB_PATH = ./libft/

SRC_FILE =	errors.c errors2.c buildstacks.c \
			printstacks.c prinstuct.c prinstuct2.c \
			instructions.c instructions2.c instructions3.c \
			sortutils.c sortutils2.c

OBJ_FILE = $(SRC_FILE:%.c=%.o)

SRC = $(addprefix $(SRC_PATH), $(SRC_FILE))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_FILE))

CHECK_MAIN = ./checker_src/checker.c
PUSHSWAP_MAIN = ./push_swap_src/push_swap.c

CCFLAGS = -Wall -Werror -Wextra
CC = gcc $(CCFLAGS)

LIBF = $(LIB_PATH)libft.a

all: $(CHECK) $(PUSHSWAP) $(LIBF)

$(CHECK): $(OBJ) $(CHECK_MAIN) 
	make -C ./libft/
	$(CC) -o $@ $(LIBF) $(OBJ) $(CHECK_MAIN)

$(PUSHSWAP): $(OBJ) $(PUSHSWAP_MAIN)
	make -C ./libft/
	$(CC)  -o $@ $(LIBF) $(OBJ) $(PUSHSWAP_MAIN)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) -I$(INC_PATH) -o $@ -c $<

clean: cleanlib
	/bin/rm -rf $(OBJ)

fclean: clean fcleanlib
	rm -f $(CHECK)
	rm -f $(PUSHSWAP)

cleanlib:
	make clean -C $(LIB_PATH)

fcleanlib:
	make fclean -C $(LIB_PATH)

re : fclean all

.PHONY: re fclean clean all