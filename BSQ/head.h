#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_read_map(char *map);
void ft_sizes_col_row(char *map, int *sizes);
char **ft_malloc(int *sizes);
void ft_fill(char **matrix, int *sizes);
void ft_find(char **matrix, int *sizes);
char ft_lo_que_toca(char **matrix, int i, int j);
void ft_max_box(char **matrix, int *sizes);
char num_max(char **matrix, int *sizes);
void fill_x(char **matrix, int i, int j, int max, int *sizes);
void back_to_normal(char **matrix, int *sizes);
void print(char **matrix, int *sizes);