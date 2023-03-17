# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahocuk <ahocuk@student.42heilbronn.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/27 17:44:55 by ahocuk            #+#    #+#              #
#    Updated: 2022/12/13 20:28:21 by ahocuk           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    =    libftprintf.a

LIBFT_PATH    =    ./libft
LIBFT    =    $(LIBFT_PATH)/libft.a

CC    =    cc
CFLAGS    =    -Wall -Wextra -Werror

RM    =    rm -f

AR    =    ar
ARFLAGS    =    rcs

SOURCES    =        ./sources/ft_printf.c \
				./sources/ft_is_argument.c \
				./sources/ft_formats.c \
				./sources/ft_char_format.c \
				./sources/ft_string_format.c \
				./sources/ft_pointer_format.c \
				./sources/ft_decimal_format.c \
				./sources/ft_unsigned_decimal_format.c \
				./sources/ft_hexadecimal_format.c \
				./sources/ft_upper_case_hexadecimal_format.c \
				./sources/ft_percent_format.c \
				./sources/ft_input_parser.c \
				./sources/ft_putchar_fd2.c \
				

OBJECTS    =    $(SOURCES:.c=.o)

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(LIBFT_PATH)

all:    $(LIBFT) $(NAME)

$(LIBFT):
		make -C $(LIBFT_PATH)

$(NAME):    $(OBJECTS)
			cp $(LIBFT) $(NAME)
			$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

clean:
		make clean -C $(LIBFT_PATH)
		$(RM) $(OBJECTS)

fclean:    clean
		make fclean -C $(LIBFT_PATH)
		$(RM) $(NAME)

re:    fclean all

.PHONY:    all clean fclean re libft