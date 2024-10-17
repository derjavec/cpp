NAME = Moar brainz!
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
$(NAME): main.cpp Zombie.cpp zombieHorde.cpp
	$(CXX) $(CXXFLAGS) -o $(NAME)  main.cpp Zombie.cpp zombieHorde.cpp

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all