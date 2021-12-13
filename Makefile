NAME =	so_long

NAME_BONUS = so_long_bonus

SRC_DIR = ./src/

OBJ_DIR = ./obj/

SRC_BONUS_DIR = ./src_bonus/

HDR_DIR = ./hdr/

OBJ_BONUS_DIR = ./obj_bonus/

LIBMLX_DIR = ./mlx/

SRC	=	$(SRC_DIR)	actions.c		\
					actions_utils.c	\
					animation.c		\
					error.c			\
					game_utils.c	\
					get_next_line.c	\
					image.c			\
					init.c			\
					libft.c			\
					map.c			\
					map_checks.c	\
					map_checks2.c	\
					clean.c			\
					game_end.c		\
					so_long.c

SRC_BONUS =	$(SRC_BONUS_DIR)	actions_bonus.c		\
            					actions_utils_bonus.c	\
            					animation_bonus.c		\
            					error_bonus.c			\
            					game_utils_bonus.c	\
            					get_next_line_bonus.c	\
            					image_bonus.c			\
            					init_bonus.c			\
            					libft_bonus.c			\
            					map_bonus.c			\
            					map_checks_bonus.c	\
            					map_checks2_bonus.c	\
            					clean_bonus.c			\
            					game_end_bonus.c		\
            					libft_b.c				\
								change_b.c				\
            					so_long_bonus.c

HDR = ./hdr/so_long.h

HDR_BONUS = ./hdr/so_long_bonus.h

OBJ = 	$(addprefix $(OBJ_DIR), $(notdir $(SRC:.c=.o)))

OBJ_BONUS = 	$(addprefix $(OBJ_BONUS_DIR), $(notdir $(SRC_BONUS:.c=.o)))

CC =	gcc

RM =	rm -f

FLAGS = -Wall -Wextra -Werror -g #-fsanitize=address

LDFLAGS		=	-L$(LIBMLX_DIR) -lmlx -framework OpenGL -framework Appkit -O3

LIBMLX		=	$(LIBMLX_DIR, libmlx.a)

all :	$(NAME) $(LIBMLX)

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c $(HDR) $(LIBMLX) Makefile | $(OBJ_DIR)
	$(CC) $(FLAGS) -O3 -I$(HDR) -Imlx -c $< -o $@

$(OBJ_BONUS_DIR)%.o:	$(SRC_BONUS_DIR)%.c $(HDR_BONUS) $(LIBMLX) Makefile | $(OBJ_BONUS_DIR)
	$(CC) $(FLAGS) -O3 -I$(HDR_BONUS) -Imlx -c $< -o $@

$(LIBMLX):
	make -C $(LIBMLX_DIR)

$(NAME): $(OBJ) $(LIBMLX)
	@$(CC) $(OBJ) -o $@ $(LDFLAGS) #$(NAME)

$(NAME_BONUS): $(OBJ_BONUS) $(LIBMLX)
	@$(CC) $(OBJ_BONUS) -o $@ $(LDFLAGS) #$(NAME_BONUS)

bonus: $(LIBMLX) $(NAME_BONUS)

clean:
	$(RM) -r $(OBJ_DIR) $(OBJ_BONUS_DIR)

fclean:	clean
	$(RM) $(NAME) $(NAME_BONUS)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(OBJ_BONUS_DIR):
	mkdir $(OBJ_BONUS_DIR)

re:		fclean all

.PHONY:	all clean fclean re bonus