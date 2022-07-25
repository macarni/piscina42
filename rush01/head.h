/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoliz-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 22:55:18 by lsoliz-o          #+#    #+#             */
/*   Updated: 2022/07/17 23:02:35 by lsoliz-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    prnt(int row, int col, char table[row][col]);
void    check_and_change(int row, int col, char tab[row][col]);
void    check_line(int row, int col, char tab[row][col]);
int count_char(int row, int col, char tab[row][col], char ch);
void    complete_cols(char *col, char tab[4][4]);
void    complete_rows(char *row, char tab[4][4]);
void    check_col(int row, int col, char tab[row][col]);
void    rush01(char **argv);
