NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_putchar.c puthex.c putnbr.c putptr.c putstr.c putunsin.c ft_printf.c

OBJS = $(SRCS:.c=.o)
	
AR = ar -rc

RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJS)
	@$(AR) $(NAME) $(OBJS)

clean : 
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) $(NAME)

re : fclean all