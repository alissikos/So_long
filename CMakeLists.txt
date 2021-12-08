cmake_minimum_required(VERSION 3.21)
project(s C)

set(CMAKE_C_STANDARD 99)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -framework OpenGL -framework AppKit -L ../mlx -lmlx")



include_directories(hdr)
include_directories(mlx)
include_directories(src_bonus)

add_executable(s
        hdr/so_long.h
        hdr/so_long_bonus.h
        src_bonus/actions_bonus.c
        src_bonus/actions_utils_bonus.c
        src_bonus/animation_bonus.c
        src_bonus/clean_bonus.c
        src_bonus/error_bonus.c
        src_bonus/game_end_bonus.c
        src_bonus/game_utils_bonus.c
        src_bonus/get_next_line_bonus.c
        src_bonus/image_bonus.c
        src_bonus/init_bonus.c
        src_bonus/libft_bonus.c
        src_bonus/map_bonus.c
        src_bonus/map_checks2_bonus.c
        src_bonus/map_checks_bonus.c
        src_bonus/so_long_bonus.c)
