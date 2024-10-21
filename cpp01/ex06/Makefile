NAME = harlFilter
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
$(NAME): main.cpp Harl.cpp                               
	$(CXX) $(CXXFLAGS) -o $(NAME)  main.cpp Harl.cpp

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all