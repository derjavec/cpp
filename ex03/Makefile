NAME = Unnecessary_violence
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
$(NAME): Makefile main.cpp Weapon.cpp HumanA.cpp HumanB.cpp                                 
	$(CXX) $(CXXFLAGS) -o $(NAME)  Makefile main.cpp Weapon.cpp HumanA.cpp HumanB.cpp                                 

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all