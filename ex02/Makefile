NAME = Account
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
$(NAME): Account.cpp tests.cpp
	$(CXX) $(CXXFLAGS) -o $(NAME) Account.cpp tests.cpp

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all