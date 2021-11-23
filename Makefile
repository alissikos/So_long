NAME =	so_long

#NAME_BONUS = checker
LIBMLX_DIR = ./mlx/

SRC	=		map_checks.c	\
			actions.c		\
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
			so_long.c

#SRC_BONUS =	checker.c			\
#			check.c				\
#			error.c				\
#			bonus.c				\
#			stack.c				\
#			operations_bonus.c


OBJ = 	$(SRC:.c=.o)

#OBJ_BONUS = 	$(SRC_BONUS:.c=.o)

CC =	gcc

RM =	rm -f

INCL =	so_long.h

#INCL_BONUS =	push_swap_bonus.h

FLAGS = -Wall -Wextra -Werror -g #-fsanitize=address

LDFLAGS		=	-L$(LIBMLX_DIR) -lmlx -lft -framework OpenGL -framework Appkit -O3

LIBMLX		=	$(addprefix $(LIBMLX_DIR), libmlx.a)

all :	$(NAME) $(LIBMLX)

%.o :	%.c $(INCL) $(INCL_BONUS) $(LIBMLX) Makefile
	$(CC) $(FLAGS) -c $< -o $@

$(LIBMLX):
	make -C $(LIBMLX_DIR)

$(NAME): $(OBJ) $(LIBMLX)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME) $(LDFLAGS)

$(NAME_BONUS): $(OBJ_BONUS) $(LIBMLX)
	@$(CC) $(FLAGS) $(OBJ_BONUS) -o $(NAME_BONUS) $(LDFLAGS)

bonus: $(NAME_BONUS) $(LIBMLX)

clean:
	$(RM) $(OBJ) $(OBJ_BONUS) $(LIBMLX)

fclean:	clean
	$(RM) $(NAME) $(NAME_BONUS) $(LIBMLX)

re:		fclean all

.PHONY:	all clean fclean re bonus