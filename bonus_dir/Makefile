NAME = so_long_bonus

CFLAGS = -Wall -Werror -Wextra -lmlx -framework OpenGL -framework AppKit

SRCS = 	so_long.c get_next_line.c get_next_line_utils.c m_player.c m_rplayer.c \
		mxfti.c anime.c readmap.c find_zerox.c count_lines.c ber_check.c \
		char_check.c char_num.c len_check.c wall_check.c  find_P.c whiler.c \
		find_e.c checker3.c checker2.c find_c.c zeronull.c findplayer.c mtoinn.c \
		move.c ex.c movement.c moving.c coinmove.c m_bomb1.c m_bomb2.c openbox.c \
		m_coin.c ft_free.c string.c

LIBFT = libft.a

LIBFT_DIR = ../libft/

FT_PRINTF = libftprintf.a

FT_PRINTF_DIR = ../ft_printf/

RM = rm -fr

all : $(NAME)

$(NAME) : $(SRCS) $(LIBFT) $(FT_PRINTF)
	@CC $(CFLAGS) $(SRCS) $(LIBFT) $(FT_PRINTF) -o $(NAME)
	
$(LIBFT) :
	@$(MAKE) -C $(LIBFT_DIR)
	mv ../libft/libft.a .

$(FT_PRINTF) :
	@$(MAKE) -C $(FT_PRINTF_DIR)
	mv ../ft_printf/libftprintf.a .

clean :
	$(RM) $(NAME)

fclean : 
	$(RM) $(NAME) $(LIBFT) $(FT_PRINTF)
	rm $(LIBFT_DIR)*.o $(FT_PRINTF_DIR)*.o

re : fclean	all