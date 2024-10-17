NAME = Phonebook
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)
$(NAME): main.cpp contact.cpp phonebook.cpp
	$(CXX) $(CXXFLAGS) -o $(NAME) main.cpp contact.cpp phonebook.cpp

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all