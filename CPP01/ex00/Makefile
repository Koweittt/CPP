CC		= c++
CFLAGS	= -Wall -Wextra -Werror 
CVersion= -std=c++98

NAME	= zombie
SRC		= src/main.cpp \
		  src/Zombie.cpp \
		  src/newZombie.cpp \
		  src/randomChump.cpp
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
