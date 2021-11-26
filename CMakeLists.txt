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
        so_long.h)

target_link_libraries(so_long ~/so_long/mlx/libmlx.a)
target_link_libraries(so_long "-framework OpenGL")
target_link_libraries(so_long "-framework AppKit")