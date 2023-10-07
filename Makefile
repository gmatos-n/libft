NAME = libft.a
SOURCES =
BONUS = 

CC = cc
AR	= ar rcs
CFLAGS = -Wall -Wextra -Werror

OBJS = $(SOURCES:.c=.o)
BOBJS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(BONUS)

$(BONUS): $(BOBJS)
	$(AR) $(NAME) $(BOBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re