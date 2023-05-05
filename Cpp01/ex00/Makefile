# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 02:18:45 by zzirh             #+#    #+#              #
#    Updated: 2023/05/05 15:23:46 by zzirh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainzzZ

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
		
OBJ = ${SRC:.cpp=.o}

HEADERS = Zombie.hpp\

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