CC		= c++
CFLAGS	= -Wall -Wextra -Werror 
CVersion= -std=c++98

NAME	= phonebook
SRC		= srcs/phonebook.cpp \
		  srcs/contact.cpp \
		  srcs/main.cpp
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

