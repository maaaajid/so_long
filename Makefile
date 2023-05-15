NAME = so_long

NAME_BONUS = so_long_bonus

CFLAGS = -Wall -Werror -Wextra -lmlx -framework OpenGL -framework AppKit

SRCS = 	so_long.c get_next_line.c get_next_line_utils.c \
		mxfti.c anime.c readmap.c move.c ex.c find_P.c \

LIBFT = libft.a

LIBFT_DIR = libft/

FT_PRINTF = libftprintf.a

FT_PRINTF_DIR = ft_printf/

RM = rm -fr

all : $(NAME)

$(NAME) : $(SRCS) $(LIBFT) $(FT_PRINTF)
	@CC $(CFLAGS) $(SRCS) $(LIBFT) $(FT_PRINTF) -o $(NAME)
	
$(LIBFT) :
	@$(MAKE) -C $(LIBFT_DIR)
	mv libft/libft.a .

$(FT_PRINTF) :
	@$(MAKE) -C $(FT_PRINTF_DIR)
	mv ft_printf/libftprintf.a .

bonus :
	@$(MAKE) -C ./bonus_dir
	@cp bonus_dir/so_long_bonus .
	@cp bonus_dir/map_bonus.ber .
	@cp -r bonus_dir/image_bonus .

clean :
	$(RM) $(NAME)

fclean : 
	@$(RM) $(NAME) $(LIBFT) $(FT_PRINTF)
	@$(RM) ./bonus_dir/$(LIBFT) ./bonus_dir/$(FT_PRINTF)
	@rm $(LIBFT_DIR)*.o $(FT_PRINTF_DIR)*.o
	@rm -rf *_bonus*

re : fclean	all