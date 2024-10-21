NAME = HI_THIS_IS_BRAIN
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
$(NAME): main.cpp
	$(CXX) $(CXXFLAGS) -o $(NAME)  main.cpp

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all