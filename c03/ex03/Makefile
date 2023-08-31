NAME = DiamondTrap

LIST = $(shell find . -name "*.cpp")

HEADER = ClapTrap.hpp ScavTrap.hhp  DiamondTrap.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

OBJSFD = temporary

OBJ = $(addprefix $(OBJSFD)/,$(LIST:.cpp=.o))

RM = rm -rf

.PHONY : all clean fclean re

all : $(NAME)

$(OBJSFD) :
	mkdir $@

$(OBJSFD)/%.o : %.cpp | $(OBJSFD)
	c++ -g $(FLAGS) -c $< -o $@

${NAME} : $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean :
	$(RM) $(OBJ)
	$(RM) $(OBJSFD)

fclean : clean
	$(RM) $(NAME)

re : fclean all