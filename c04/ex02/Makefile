NAME = Animals

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ = $(SRC:.cpp=.o)

all :$(NAME)

$(NAME): $(OBJ)
	@echo "\033[0;33mCompiling...\033[0m"
	$(CXX) $(OBJ) -o $(NAME)
	@echo "\033[0m"

.cpp.o:
	@echo "\033[0;32mGenerating obj..."
	$(CXX) $(CXXFLAGS) -c $<
	@echo "\033[0m"

clean:
	@echo "\033[0;31mCleaning..."
	rm -f $(OBJ)
	@echo "\033[0m"

fclean: clean
	@echo "\033[0;31mRemoving executable..."
	rm -f $(NAME)
	@echo "\033[0m"

re: fclean all

fmt:
	clang-format -i $(SRC) *.hpp

.PHONY: all re clean fclean