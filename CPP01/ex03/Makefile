CC		= c++
CFLAGS	= -Wall -Wextra -Werror 
CVersion= -std=c++98

NAME	= weapon
SRC		= src/main.cpp \
		  src/HumanA.cpp \
		  src/HumanB.cpp \
		  src/Weapon.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(CVersion) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) $(CVersion) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
