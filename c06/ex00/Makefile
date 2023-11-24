NAME = convert

LIST = $(shell find . -name "*.cpp")

HEADER = $(shell find . -name "*.hpp")

FLAGS = -Wall -Wextra -Werror -std=c++98

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