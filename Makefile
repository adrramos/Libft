# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/16 16:46:34 by adrramos          #+#    #+#              #
#    Updated: 2025/10/31 19:38:46 by adrramos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	ft_memset.c ft_strchr.c ft_strdup.c ft_toupper.c ft_strlcat.c ft_strlcpy.c \
	ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c \
	#ft_strjoin.c 

CC = cc

CFLAGS = -Werror -Wall -Wextra

OBJECTS = $(SRCS:.c=.o)

RM = rm -f

#Cria os ficheiros .o  com base no .c
.c.o: 
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

all: $(NAME)

## clean, fclean and re as well as all.
clean:
	$(RM) $(OBJECTS)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re