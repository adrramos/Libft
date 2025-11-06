# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrramos <adrramos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/01 17:33:31 by adrramos          #+#    #+#              #
#    Updated: 2025/11/06 20:23:32 by adrramos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME = libft.a

SRCS = 	./ft_atoi.c \
		./ft_bzero.c \
		./ft_calloc.c \
		./ft_isalnum.c \
		./ft_isalpha.c \
		./ft_isascii.c \
		./ft_isdigit.c \
		./ft_isprint.c \
		./ft_memchr.c \
		./ft_memcmp.c \
		./ft_memcpy.c \
		./ft_memmove.c \
		./ft_memset.c \
		./ft_strchr.c \
		./ft_strdup.c \
		./ft_toupper.c \
		./ft_strlen.c \
		./ft_strncmp.c \
		./ft_strnstr.c \
		./ft_strrchr.c \
		./ft_tolower.c \
		./ft_strlcat.c \
		./ft_strlcpy.c \
		./ft_strjoin.c \
		./ft_itoa.c
#./ft_strtrim.c \ 
OBJECTS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Werror -Wall -Wextra

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

fclean: clean
	$(RM) $(NAME)

re: fclean all 

.PHONY: all clean fclean re