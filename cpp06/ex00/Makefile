NAME = convert
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RESET = \033[0m
PASTEL_PINK = \033[38;5;218m
PASTEL_BLUE = \033[38;5;153m
PASTEL_YELLOW = \033[38;5;229m
PASTEL_GREEN = \033[38;5;150m
PASTEL_LILAC = \033[38;5;183m

all: $(NAME)

$(NAME): main.cpp ScalarConvert.cpp
	@echo "$(PASTEL_BLUE)Compiling sources... ⏳$(RESET)"
	@$(CXX) $(CXXFLAGS) -o $(NAME) main.cpp ScalarConvert.cpp
	@echo "$(PASTEL_GREEN)Build complete! 🎉 Executable created: $(NAME)$(RESET)"

clean:
	@rm -f *.o
	@echo "$(PASTEL_YELLOW)Cleaning object files... ✔️$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(PASTEL_PINK)Cleaning executable... ✅$(RESET)"
	@echo "$(PASTEL_LILAC)All clean! 😊✨$(RESET)"

re: fclean all
	@echo "$(PASTEL_BLUE)Rebuilt everything from scratch! 🔄🚀$(RESET)"