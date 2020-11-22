# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: simonasemancova <simonasemancova@studen      +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/06 00:54:15 by simonaseman   #+#    #+#                  #
#    Updated: 2020/11/22 16:05:52 by jsimelio      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PATH_SRC = ./

SRC =	$(PATH_SRC)ft_atoi.c \
		$(PATH_SRC)ft_bzero.c \
		$(PATH_SRC)ft_calloc.c \
		$(PATH_SRC)ft_isalnum.c \
		$(PATH_SRC)ft_isalpha.c \
		$(PATH_SRC)ft_isascii.c \
		$(PATH_SRC)ft_isdigit.c \
		$(PATH_SRC)ft_isprint.c \
		$(PATH_SRC)ft_itoa.c \
		$(PATH_SRC)ft_memccpy.c \
		$(PATH_SRC)ft_memchr.c \
		$(PATH_SRC)ft_memcmp.c \
		$(PATH_SRC)ft_memcpy.c \
		$(PATH_SRC)ft_memmove.c \
		$(PATH_SRC)ft_memset.c \
		$(PATH_SRC)ft_putchar_fd.c \
		$(PATH_SRC)ft_putendl_fd.c \
		$(PATH_SRC)ft_putnbr_fd.c \
		$(PATH_SRC)ft_putstr_fd.c \
		$(PATH_SRC)ft_split.c \
		$(PATH_SRC)ft_strchr.c \
		$(PATH_SRC)ft_strdup.c \
		$(PATH_SRC)ft_strjoin.c \
		$(PATH_SRC)ft_strlcat.c \
		$(PATH_SRC)ft_strlcpy.c \
		$(PATH_SRC)ft_strlen.c \
		$(PATH_SRC)ft_strmapi.c \
		$(PATH_SRC)ft_strncmp.c \
		$(PATH_SRC)ft_strnstr.c \
		$(PATH_SRC)ft_strrchr.c \
		$(PATH_SRC)ft_strtrim.c \
		$(PATH_SRC)ft_substr.c \
		$(PATH_SRC)ft_tolower.c \
		$(PATH_SRC)ft_toupper.c \

OBJS = $(SRC:.c=.o)

BONUS = 	ft_lstnew.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstadd_front.c \
			ft_lstadd_back.c \
			ft_lstsize.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstlast.c \

BONUS_OBJS = $(BONUS:.c=.o)

CC = gcc
RM = rm -f
cFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME)

re: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus