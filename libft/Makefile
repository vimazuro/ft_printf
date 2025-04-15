# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 16:23:31 by vimazuro          #+#    #+#              #
#    Updated: 2024/10/23 12:40:17 by vimazuro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = .
INC_DIR = .

SRC_FILES = \
	    ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	    ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
	    ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
	    ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
	    ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
	    ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
	    ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

BONUS_FILES = \
	      ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c \
	      ft_lstclear_bonus.c ft_lstdelone_bonus.c \
	      ft_lstiter_bonus.c ft_lstlast_bonus.c \
	      ft_lstmap_bonus.c ft_lstnew_bonus.c \
	      ft_lstsize_bonus.c

OBJS = $(SRC_FILES:.c=.o)
BONUS_OBJS = $(BONUS_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c Makefile libft.h
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

RM = rm -f

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
