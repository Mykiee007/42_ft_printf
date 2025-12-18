# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvelasqu <mvelasqu@student.42singapore.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/03 10:40:00 by mvelasqu          #+#    #+#              #
#    Updated: 2025/12/05 14:30:24 by mvelasqu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Varibales
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar
AFLAGS = rcs

#Files
SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_puthexlower.c ft_puthexlowerlong.c \
		ft_puthexupper.c ft_putnbr.c ft_putunsigned.c ft_putptr.c ft_strchr.c
OBJS = $(SRCS:.c=.o)

#Commands
all: $(NAME)

$(NAME): $(OBJS)  
	$(AR) $(AFLAGS) $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re