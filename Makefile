NAME = push_swap

SRCS = 1check_args.c 2ft_stack.c 3ft_stack_2.c ft_isdigit.c\
       ft_putnbr_fd.c push_swap.c ft_split.c ft_apply_rule_push.c\
       ft_sort_small_2.c ft_small_sort.c ft_rule_reverse_rotate.c\
       4ft_utils.c ft_putendl_fd.c ft_apply_rule_swap.c\
       ft_apply_rule_rotate.c ft_atoi.c ft_radix.c\

OBJS = ${SRCS:.c=.o}

CC = cc
CFLAGS = -Wall -Wextra -Werror -Iincludes -g

RM = rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	@${CC} ${CFLAGS} ${OBJS} -o ${NAME}
	@echo "Compilation completed"

clean:
	@${RM} ${OBJS}
	@echo "Clean completed"

fclean: clean
	@${RM} ${OBJS} ${NAME}
	@echo "Full clean completed"

re: fclean all

.PHONY: all clean fclean re
