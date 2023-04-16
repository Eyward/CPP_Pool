# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 02:30:10 by zzirh             #+#    #+#              #
#    Updated: 2023/04/11 23:55:23 by zzirh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp\
		phonebook.cpp\
		Contact.cpp\
		
OBJ = ${SRC:*.cpp=*.o}
HEADERS = Contact.hpp\
			phonebook.hpp
RM = rm -fr

.cpp.o:
	${CC} ${FLAGS} -c $< -o ${<:*.cpp=*.o}

${NAME}:	${OBJ} ${HEADERS}
	${CC} ${FLAGS} -o ${NAME} ${OBJ}

all:	${NAME}

clean:
	@${RM} *.o */*.o */*/*.o

fclean: clean
	@${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
