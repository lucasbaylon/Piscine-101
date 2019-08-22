/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_is_valid.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jotrique <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 10:03:33 by jotrique     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 19:54:44 by jotrique    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int     used_in_col(int **grid, int col, int num);
int     used_in_row(int **grid, int row, int num);
int     find_empty_spot(int **grid, int row, int col);
int     seen_from_right(int **grid, int *argv_tab, int row);
int     seen_from_left(int **grid, int *argv_tab, int row);
int     seen_from_bottom(int **grid, int *argv_tab, int col);
int     seen_from_top(int **grid, int *argv_tab, int col);

int		ft_col_is_valid(int **grid, int *tab, int col, int i)
{
	//if (used_in_col(grid, col, i)
	return 0;
}

int		ft_is_seen(int **grid, int *tab, int row, int col)
{
	if (seen_from_right(grid, &tab, row) &&
			seen_from_left(grid, &tab, row) &&
			seen_from_bottom(grid, &tab, col) &&
			seen_from_top(grid, &tab, col))
		return (1);
	return (0);
}
