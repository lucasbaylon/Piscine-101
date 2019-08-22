/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft.h                                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jotrique <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 10:06:14 by jotrique     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 10:28:07 by jotrique    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		used_in_col(int **grid, int col, int num);
int		used_in_row(int **grid, int row, int num);
int		find_empty_spot(int **grid, int row, int col);
int		seen_from_right(int **grid, int *argv_tab, int row);
int		seen_from_left(int **grid, int *argv_tab, int row);
int		seen_from_bottom(int **grid, int *argv_tab, int col);
int		seen_from_top(int **grid, int *argv_tab, int col);
