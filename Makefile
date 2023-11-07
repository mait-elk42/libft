NAME = libft.a
src = ft_atoi.c ft_itoa.c ft_putendl_fd.c ft_strlcat.c ft_strtrim.c ft_bzero.c ft_memchr.c  ft_putnbr_fd.c  ft_strlcpy.c ft_substr.c ft_isalnum.c ft_memcmp.c  ft_putstr_fd.c  ft_strlen.c  ft_tolower.c ft_isalpha.c ft_memcpy.c  ft_split.c   ft_strmapi.c ft_toupper.c ft_isascii.c ft_memmove.c ft_strchr.c  ft_strncmp.c ft_isdigit.c ft_memset.c  ft_striteri.c   ft_strnstr.c ft_isprint.c ft_putchar_fd.c ft_strjoin.c ft_strrchr.c ft_calloc.c
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
	rm -f $(src_o) $(s_bonus_o)

fclean: clean
	rm -f $(NAME)

bonus: $(s_bonus_o)
	ar rcs $(NAME) $(s_bonus_o)

$(s_bonus_o):
	cc $(FLAGS) -c $(s_bonus)
re: fclean all

.PHONY : all clean fclean re