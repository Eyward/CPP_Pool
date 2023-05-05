# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 02:55:43 by zzirh             #+#    #+#              #
#    Updated: 2023/05/05 15:24:27 by zzirh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
		
OBJ = ${SRC:.cpp=.o}

HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp

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