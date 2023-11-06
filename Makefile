NAME = libft.a
src = ft_is*.c ft_str*.c ft_to*.c ft_itoa.c ft_atoi.c ft_mem*.c ft_put*.c ft_split.c ft_bzero.c ft_substr.c
src_o = $(src:.c=.o)
s_bonus = ft_lst*.c
s_bonus_o = $(s_bonus:.c=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(src_o)
	ar rcs $(NAME) $(src_o)

$(src_o):
	cc $(FLAGS) -c $(src)
clean:
	rm $(src_o) $(s_bonus_o)

fclean: clean
	rm $(NAME)

bonus: $(s_bonus_o)
	ar rcs $(NAME) $(src_o)
$(s_bonus_o):
	cc $(FLAGS) -c $(s_bonus)
re: fclean all

.PHONY : all clean fclean re