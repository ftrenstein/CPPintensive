NAME = Weapon

LIST = $(shell find . -name "*.cpp")

HEADER = HumanA.hpp HumanB.hpp Weapon.hpp

FLAGS = -Wall -Wextra -Werror

OBJ = $(LIST:.cpp=.o)

.PHONY : all clean fclean re

all : $(NAME)

%.o : %.cpp $(HEADER)
	c++ -g $(FLAGS) -c $< -o $@

${NAME} : $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all