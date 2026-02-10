NAME = so_long
CC = cc
CFLAGS = -Wall -Wextra -Werror 
SRCS=  gnl.c gnlutils.c main.c src_fd.c src_map.c src_grid.c ff.c src_item_parse1.c src_item_parse2.c \
src_tiles.c src_hooks.c
OBJS = $(SRCS:.c=.o)
MLX = minilibx-linux

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -I$(MLX) -L$(MLX) -lmlx -lXext -lX11 -lm  -o $(NAME)
%.o: %.c
	$(CC) $(CFLAGS) -I$(MLX) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:  clean
	rm -f $(NAME)

re:  fclean all

.PHONY : all clean fclean re
