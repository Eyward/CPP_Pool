# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/04 03:17:55 by zzirh             #+#    #+#              #
#    Updated: 2023/05/05 15:23:34 by zzirh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp Harl.cpp
		
OBJ = ${SRC:.cpp=.o}

HEADERS = Harl.hpp

RM = rm -fr

%.o:%.cpp ${HEADERS}
	${CC} ${FLAGS} -c $< -o $@

${NAME}:	${OBJ} 
	${CC} ${FLAGS} -o ${NAME} ${OBJ}

all: ${NAME}

clean:
	@${RM} *.o */*.o */*/*.o
fclean: clean
	@${RM} ${NAME}
re: fclean all

.PHONY: all clean fclean re