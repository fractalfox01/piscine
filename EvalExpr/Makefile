NAME = calc_test

HEADERS = $(wildcard includes/*.h)

SRC := $(wildcard funcs/*.c)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(SRC) main.c -o $(NAME) -I$(HEADERS)

clean:
	/bin/rm -f ./*.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
