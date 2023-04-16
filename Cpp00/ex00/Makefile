# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/08 19:17:55 by zzirh             #+#    #+#              #
#    Updated: 2023/04/15 17:30:45 by zzirh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp
OBJ = ${SRC:.cpp=.o}

.cpp.o:
	${CC} ${FLAGS} -c $< -o ${<:.cpp=.o}

RM = rm -fr

${NAME}:	${OBJ}
	${CC} ${FLAGS} -o ${NAME} ${OBJ}

all :	${NAME}

clean:
	@${RM} *.o */*.o */*/*.o
fclean:	clean
	@${RM} ${NAME}
re :	fclean all

.PHONY:	all clean fclean re
