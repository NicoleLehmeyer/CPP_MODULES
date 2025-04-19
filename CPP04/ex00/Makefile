.PHONY: all clean fclean re

NAME = Animal

FLAGS = -Wall -Wextra -Werror -std=c++98 -I /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1

SOURCES = Animal.cpp Cat.cpp Dog.cpp main.cpp WrongCat.cpp WrongAnimal.cpp

OBJECTS = $(SOURCES:%.cpp=%.o)

all: $(NAME)

%.o: %.cpp
	c++ $(FLAGS) -o $@ -c $<

$(NAME):	$(OBJECTS)
	c++ $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re:		fclean all

# make re && leaks --atExit -- ./iDontWantToSetTheWorldOnFire