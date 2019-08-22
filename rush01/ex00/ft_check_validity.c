/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_skyscraper.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jotrique <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 16:56:05 by jotrique     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 10:12:37 by jotrique    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		find_empty_spot(int **grid, int row, int col)
{
	row = 1;
	col = 1;
	while (row <= 4)
	{
		while (col <= 4)
		{
			if (grid[row][col] == 0)
				return (1);
			col++;
		}
		row++;
	}
	return (0);
}

int		used_in_row(int **grid, int row, int num)
{
	int i;

	i = 1;
	while (i <= 4)
	{
		if (grid[row][i] == num)
			return (1);
		i++;
	}
	return (0);
}

int		used_in_col(int **grid, int col, int num)
{
	int i;

	i = 1;
	while (i <= 4)
	{
		if (grid[i][col] == num)
			return (1);
		i++;
	}
	return (0);
}
