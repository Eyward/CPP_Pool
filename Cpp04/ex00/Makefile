NAME = program

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98 

SRC = Animal.cpp  Cat.cpp  Dog.cpp  WrongAnimal.cpp  WrongCat.cpp  main.cpp
		
OBJ = ${SRC:.cpp=.o}

HEADERS = Animal.hpp  Cat.hpp  Dog.hpp  WrongAnimal.hpp  WrongCat.hpp

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