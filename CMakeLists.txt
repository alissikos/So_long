cmake_minimum_required(VERSION 3.20)
project(so_long C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(so_long
        actions.c
        actions_utils.c
        animation.c
        clean.c
        error.c
        game_end.c
        game_utils.c
        get_next_line.c
        image.c
        init.c
        libft.c
        map.c
        map_checks.c
        map_checks2.c
        so_long.c
        so_long.h
        so_long_bonus
        actions_bonus.c
        actions_utils_bonus.c
        animation_bonus.c
        clean_bonus.c
        error_bonus.c
        game_end_bonus.c
        game_utils_bonus.c
        get_next_line_bonus.c
        image_bonus.c
        init_bonus.c
        libft_bonus.c
        map_bonus.c
        map_checks_bonus.c
        map_checks2_bonus.c
        so_long_bonus.c
        so_long_bonus.h)

target_link_libraries(so_long ~/so_long/mlx/libmlx.a)
target_link_libraries(so_long "-framework OpenGL")
target_link_libraries(so_long "-framework AppKit")