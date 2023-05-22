NAME = FragTrap

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp 
		
OBJ = ${SRC:.cpp=.o}

HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

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