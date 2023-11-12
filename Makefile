NAME = libft.a
SRC = ft_atoi.c ft_itoa.c ft_putendl_fd.c ft_strlcat.c \
	ft_strtrim.c ft_bzero.c ft_memchr.c  ft_putnbr_fd.c \
	ft_strlcpy.c ft_substr.c ft_isalnum.c ft_memcmp.c  \
	ft_putstr_fd.c  ft_strlen.c  ft_tolower.c ft_isalpha.c \
	ft_memcpy.c  ft_split.c   ft_strmapi.c ft_toupper.c \
	ft_isascii.c ft_memmove.c ft_strchr.c  ft_strncmp.c \
	ft_isdigit.c ft_memset.c  ft_striteri.c   ft_strnstr.c \
	ft_isprint.c ft_putchar_fd.c ft_strjoin.c ft_strrchr.c \
	ft_calloc.c ft_strdup.c
SRC_OBJ = $(SRC:.c=.o)
BSRC = ft_lstadd_back_bonus.c  ft_lstdelone_bonus.c ft_lstmap_bonus.c \
	ft_lstadd_front_bonus.c ft_lstiter_bonus.c ft_lstnew_bonus.c \
	ft_lstclear_bonus.c ft_lstlast_bonus.c ft_lstsize_bonus.c
BSRC_OBJ = $(BSRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME) : $(SRC_OBJ)
	ar rc $(NAME) $(SRC_OBJ)

%.o: %.c libft.h
	cc $(CFLAGS) -c $<
clean:
	rm -f $(SRC_OBJ) $(BSRC_OBJ)

fclean: clean
	rm -f $(NAME)

bonus: $(BSRC_OBJ)
	ar rc $(NAME) $(BSRC_OBJ)

$(BSRC_OBJ):
	cc $(CFLAGS) -c $(BSRC)
re: fclean all

.PHONY : all clean fclean re bonus
