# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samusanc <samusanc@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 13:35:22 by samusanc          #+#    #+#              #
#    Updated: 2023/01/20 16:33:47 by samusanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAIN	= 	main.c
HFILES	= 	libft.h
NAME 	= 	libft.a

CC		= 	gcc
OUT		= 	adeu
AR		=	ar rcs 
L		=	main.o -L. -lft
OF		=	*.c Makefile libft.h

GA		=	git add
GC		=	git commit -m "subiendo prueba"

CFLAGS	= 	-Wextra -Werror -Wall 
NFILES	= 	$(filter-out $(MAIN), $(wildcard *.c)) $(HFILES)
SRC		= \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			\
			ft_atoi.c \
			ft_bzero.c \
			ft_toupper.c \
			\
			ft_memset.c \
			ft_memcpy.c \
			ft_memmove.c \
			\
			ft_strlen.c \
			ft_strlcat.c \
			ft_strlcpy.c \

OBJ		= 	$(SRC:.c=.o)

# COLORS

BLACK	=	\033[0;30m
RED		=	\033[0;31m
GREEN	=	\033[0;32m
YELLOW	=	\033[0;33m
BLUE	=	\033[0;34m
MAGENTA	=	\033[0;35m
CYAN	=	\033[0;36m
RESET	=	\033[0m

#ALL
all		: 	$(NAME)

$(NAME)	: 	$(OBJ)
			$(AR) $@ $^
main.o	:	$(MAIN)
			@$(CC) $(CFLAGS) -c $(MAIN)
$(OUT)	: 	$(NAME) main.o
			@$(CC) $(CFLAGS) -o $(OUT) $(L)
			@$(GA) $(OF)

#CLEAN
clean	:
			@rm -f $(OBJ)
			@echo "$(MAGENTA)===> objects have been removed$(MAGENTA)"
fclean	:
			@rm -f $(OBJ) $(NAME) $(OUT) main.o
			@echo "$(MAGENTA)===> all clean$(MAGENTA)"
			@$(GC)

#GIT
add		:
			@$(GA) $(OF)
commit	:
			@$(GC)

#Normi
normi	:
			@norminette $(NFILES)

re		:	fclean $(NAME)
