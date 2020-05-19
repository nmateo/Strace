NAME	= strace

CC	= gcc -g

RM	= rm -f

SRCS	= ./sources/main.c \
	  ./sources/parser.c \
	  ./sources/sys_calls.c \
	  ./sources/sysc_mmap.c \
	  ./sources/sysc_open.c \
	  ./sources/sysc_stat.c \
	  ./sources/trace.c \
	  ./sources/print.c \
	  ./sources/parse_type_print.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
