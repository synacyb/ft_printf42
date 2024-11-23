CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_putnbr_fd.c ft_putstr_fd.c ft_printf.c

OBJS = $(SRCS:.c=.o)

DELETE = rm -f
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(DELETE) $(OBJS) $(BOBJS)

fclean: clean
	$(DELETE) $(NAME)

re: fclean all

.PHONY:	clean