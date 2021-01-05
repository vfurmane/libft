# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfurmane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/04 11:23:33 by vfurmane          #+#    #+#              #
#    Updated: 2021/01/05 14:49:45 by vfurmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= $(addprefix ft_, atoi.c bzero.c isalnum.c isalpha.c isascii.c isdigit.c isprint.c memccpy.c memchr.c memcmp.c memcpy.c memmove.c memset.c strchr.c strlen.c strrchr.c tolower.c toupper.c)
OBJS		= $(SRCS:.c=.o)
INCL		= .
NAME		= libft.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar -rcs
RM			= rm -f

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -I $(INCL) -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) $@ $^

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
