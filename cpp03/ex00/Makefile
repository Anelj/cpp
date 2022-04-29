NAME = a.out
DIR_OBJ = obj
LIST = main.cpp ClapTrap.cpp
OBJ = $(addprefix $(DIR_OBJ)/, $(LIST:.cpp=.o))

all : $(NAME)

$(NAME) : $(OBJ)
	c++ -std=c++98 -Wall -Werror -Wextra $(OBJ) -o $(NAME)

$(DIR_OBJ)/%.o : %.cpp
	mkdir -p $(DIR_OBJ)
	c++ -std=c++98 -Wall -Werror -Wextra  -c $< -o $@

clean :
	rm -rf $(DIR_OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
