NAME = replace
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
$(NAME): main.cpp replace.cpp                               
	$(CXX) $(CXXFLAGS) -o $(NAME)  main.cpp replace.cpp

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all