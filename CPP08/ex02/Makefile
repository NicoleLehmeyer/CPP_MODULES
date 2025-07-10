.PHONY: all clean fclean re

<<<<<<< HEAD
NAME = functions
=======
NAME = mutant
>>>>>>> 3aeb713d8e8b3402353e14a200a6910f0641129d

FLAGS = -Wall -Wextra -Werror -std=c++98 -I /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1

SOURCES = main.cpp

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

# make re && leaks --atExit -- ./functions