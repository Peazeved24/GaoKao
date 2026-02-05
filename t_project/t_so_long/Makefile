NAME = so_long
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS=  gnl.c gnlutils.c main.c src_fd.c src_map.c src_grid.c ff.c src_item_parse1.c src_item_parse2.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:  clean
	rm -f $(NAME) $(OBJS)

re:  fclean all

.PHONY : all clean fclean re