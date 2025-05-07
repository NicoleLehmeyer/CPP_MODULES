.PHONY: all clean fclean re

NAME = Bureaucrat

FLAGS = -Wall -Wextra -Werror -std=c++98 -I /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1

SOURCES = Bureaucrat.cpp main.cpp 

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

# make re && leaks --atExit -- ./Bureaucrat