# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vimazuro <vimazuro@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 13:04:10 by vimazuro          #+#    #+#              #
#    Updated: 2024/10/24 12:47:53 by vimazuro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = .
INC_DIR = .
LIBFT_DIR = libft/
LIBFT_INC = $(LIBFT_DIR)
LIBFT_LIB = $(LIBFT_DIR)libft.a
HEADER = ft_printf.h

SRC_FILES = \
	    ft_printf.c \
	    ft_print_format_c.c \
	    ft_print_format_d_i.c \
	    ft_print_format_p.c \
	    ft_print_format_percent.c \
	    ft_print_format_s.c \
	    ft_print_format_u.c \
	    ft_print_format_x.c

SRC_FILES_LIBFT = \
		  $(LIBFT_DIR)ft_putchar_fd.c \
		  $(LIBFT_DIR)ft_putnbr_fd.c \
		  $(LIBFT_DIR)ft_putstr_fd.c \
		  $(LIBFT_DIR)ft_strlen.c

OBJS = $(SRC_FILES:.c=.o)
OBJS_LIBFT = $(SRC_FILES_LIBFT:.c=.o)

all: libft $(NAME)

libft: 
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(OBJS_LIBFT)
	ar rcs $(NAME) $(OBJS) $(OBJS_LIBFT)

%.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -I$(INC_DIR) -I$(LIBFT_INC) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_LIBFT)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re libft
