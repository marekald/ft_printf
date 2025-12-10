NAME = libftprintf.a

SRCS_DIR = sources/
SRCS = ft_printf.c ft_putnbr_base.c

OBJECTS = $(addprefix $(SRCS_DIR), $(SRCS:.c=.o))
DOTC = $(addprefix $(SRCS_DIR), $(SRCS))

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(OBJECTS): $(SRCS_DIR)%.o: $(SRCS_DIR)%.c
	@gcc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@echo "$(NAME) generated."

clean:
	@$(RM) $(OBJECTS)
	@echo "Objects removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "$(NAME) removed."

re: fclean all

.PHONY: all clean fclean re
