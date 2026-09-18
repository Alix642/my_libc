CC = cc
CFLAGS = -Wall -Wextra -Werror -std=c11

NAME = my_libc.a

SRC = my_strlen.c my_strcpy.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

