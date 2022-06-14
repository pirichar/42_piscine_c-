NAME = Zombie

cc = c++

CFLAGS = -Wall -Wextra -Werror

C2FLAGS = -Wall -Wextra -Werror -lc++ -std=c++98

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.Class.cpp

OBJ = $(SRC:.cpp=.o)

all :$(NAME)

$(NAME): $(OBJ)
	@echo "\033[0;33mCompiling..."
	$(CC) $(C2FLAGS) $(OBJ) -o $(NAME)
	@echo "\033[0m"

.cpp.o:
	@echo "\033[0;32mGenerating obj..."
	$(CC) $(CFLAGS) -c $<
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

.PHONY: all re clean fclean