# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samusanc <samusanc@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 13:35:22 by samusanc          #+#    #+#              #
#    Updated: 2023/01/20 16:43:09 by samusanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OMAIN	=	../main/main.c
MAIN	= 	main.c
HFILES	= 	libft.h
NAME 	= 	libft.a

CC		= 	gcc
OUT		= 	adeu
AR		=	ar rcs 
L		=	main.o -L. -lft
OF		=	*.c makefile libft.h

GA		=	git add
GC		=	git commit -m "subiendo prueba"

CFLAGS	= 	-Wextra -Werror -Wall 
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
			ft_tolower.c \
			ft_calloc.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_memchr.c \

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
all		: 	$(OUT)

$(MAIN)		:	$(OMAIN)
			cp $(OMAIN) ./
$(NAME)	: 	$(OBJ)
			$(AR) $@ $^
main.o	:	$(MAIN)
			@$(CC) $(CFLAGS) -c $(MAIN) -o ../libft/main.o
$(OUT)	: 	$(NAME) main.o
			@$(CC) $(CFLAGS) -o $(OUT) $(L)

#CLEAN
clean	:
			@rm -f $(OBJ)
			@echo "$(MAGENTA)===> objects have been removed$(MAGENTA)"
fclean	:
			@rm -f $(OBJ) $(NAME) $(OUT) main.o $(MAIN)
			@echo "$(MAGENTA)===> all clean$(MAGENTA)"

#GIT
add		:
			@$(GA) $(OF)
commit	:
			@$(GC)

re		:	fclean all