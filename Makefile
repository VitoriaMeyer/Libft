# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmeyer-s <vmeyer-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 14:57:28 by vmeyer-s          #+#    #+#              #
#    Updated: 2022/02/18 05:54:28 by vmeyer-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = 	ft_memset 		\
		ft_bzero		\
		ft_memcpy		\
		ft_memmove		\
		ft_memchr		\
		ft_isalnum		\
		ft_isascii		\
		ft_isprint		\
		ft_isalpha 		\
		ft_isdigit		\
		ft_memcmp		\
		ft_toupper		\
		ft_tolower		\
		ft_strlen		\
		ft_strlcpy		\
		ft_strlcat		\
		ft_strchr		\
		ft_strrchr		\
		ft_atoi 		\
		ft_strncmp		\
		ft_memchr		\
		ft_memcmp		\
		ft_putchar_fd	\
		ft_putstr_fd	\
		ft_putendl_fd	\
		ft_putnbr_fd	\
		ft_strnstr		\
		ft_calloc 		\
		ft_strdup		\
		ft_substr		\
		ft_strjoin		\
		ft_strtrim		\
		ft_strmapi		\
		ft_striteri		\
		ft_itoa			\
		ft_split		\


BONUS = ft_lstnew \
		ft_lstadd_front\
		ft_lstsize\
		ft_lstlast\
		ft_lstadd_back\
		ft_lstdelone\
		ft_lstclear\
		ft_lstiter

CC =gcc
RM =rm -f
CFLAGS = -Wall -Werror -Wextra -I.

all:$(NAME)

$(NAME): $(SRC:=.o)
			ar rc $(NAME) $(SRC:=.o)
clean:
	$(RM)	$(SRC:=.o) $(BONUS:=.o)
fclean: clean
		$(RM)	$(NAME)
re:	fclean	$(NAME)
bonus:	$(SRC:=.o)	$(BONUS:=.o)
		ar rc $(NAME) $(SRC:=.o)	$(BONUS:=.o)
