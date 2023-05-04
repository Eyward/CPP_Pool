# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 02:02:46 by zzirh             #+#    #+#              #
#    Updated: 2023/05/03 02:58:41 by zzirh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainref

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp
		
OBJ = ${SRC:.cpp=.o}

RM = rm -fr

%.o:%.c
	%{CC} ${FLAGS} -c $< -o $@

${NAME}:	${OBJ}
	${CC} ${FLAGS} -o ${NAME} ${OBJ}

all: ${NAME}

clean:
	@${RM} *.o */*.o */*/*.o
fclean: clean
	@${RM} ${NAME}
re: fclean all

.PHONY: all clean fclean re