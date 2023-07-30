# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ifreire- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 15:21:04 by ifreire-          #+#    #+#              #
#    Updated: 2021/11/21 20:07:35 by ifreire-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#OBJS_Wildcard	= $(wildcard *.c)

SRC				= ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c \
				ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
				ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		  		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
				ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
				ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
				ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
				ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
				ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS_O			= $(SRC:.c=.o)

SRC_B	= 		ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
				ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
				ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJS_BONUS_O	= $(SRC_B:.c=.o)

CC				= gcc

CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

all:			$(NAME) 

$(NAME):		$(OBJS_O)
				ar rcs $(NAME) $(OBJS_O)
				ranlib $(NAME)

clean:
				rm -f $(OBJS_O) $(OBJS_BONUS_O)

fclean: 		clean
				rm -f $(NAME)

re: 			fclean $(NAME)

bonus:			$(OBJS_BONUS_O)
				ar rcs $(NAME) $(OBJS_BONUS_O)
				ranlib $(NAME)

.PHONY: all clean fclean re bonus
