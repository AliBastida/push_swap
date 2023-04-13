# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abastida <abastida@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/09 12:54:42 by abastida          #+#    #+#              #
#    Updated: 2023/03/03 17:21:25 by abastida         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap
SRC := push_swap.c list_utils.c init.c check_errors.c \
	   check_num.c movements.c print_movements.c \
	   print_movements_continue.c sort_short.c \
	   sort_utils.c sort_big.c
OBJ := $(SRC:.c=.o)
DEP := $(SRC:.c=.d)
CC := gcc
CFLAGS := -Wall -Werror -Wextra -g -MMD -I inc/
RM := rm -rf
LIBS := libftprintf/libftprintf.a 
LIBPATH := -L libftprintf -lftprintf
HEADER := inc/
INCLUDE := -I libftprintf -I $(HEADER)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

all: make_libs $(NAME)

-include $(DEP)
$(NAME): $(LIBS) $(OBJ) Makefile
	$(CC) $(CFLAGS) $(LIBPATH) $(OBJ) -o $(NAME)

make_libs:
	$(MAKE) -C libftprintf

clean:
	$(RM) $(OBJ)
	$(RM) $(DEP)
	$(MAKE) clean -C libftprintf

fclean:
	$(MAKE) clean
	$(RM) $(NAME)
	$(MAKE) fclean -C libftprintf

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re bonus

