NAME = colle-2
FUNCTIONS = main.c rush00.c rush01.c rush02.c rush03.c rush04.c list_handler.c ft_iostream.c find_hits.c
SRCS = srcs/
.PHONY: all clean fclean re

all:
	gcc -Wall -Wextra -Werror -o $(NAME) $(patsubst %, $(SRCS)%, $(FUNCTIONS))

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all