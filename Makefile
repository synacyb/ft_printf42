CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_putnbr_fd.c ft_putstr_fd.c ft_printf.c ft_putchar_fd.c ft_puthxs_l.c ft_unsignedint.c

OBJS = $(SRCS:.c=.o)

DELETE = rm -f
NAME = ft_printf.a

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