/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_seen_from.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jotrique <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 09:47:06 by jotrique     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 10:21:49 by jotrique    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		seen_from_top(int **grid, int *argv_tab, int col)
{
	int i;
	int count;
	int last;

	i = 0;
	count = 0;
	last = 0;
	while (i <= 3)
	{
		if (grid[i][col] >= last)
		{
			count++;
			last = grid[i][col];
		}
		i++;
	}
	if (count >= argv_tab[0 + col])
		return (1);
	return (0);
}

int		seen_from_bottom(int **grid, int *argv_tab, int col)
{
	int i;
	int count;
	int last;

	i = 3;
	count = 0;
	last = 0;
	while (i >= 0)
	{
		if (grid[i][col] >= last)
		{
			count++;
			last = grid[i][col];
		}
		i--;
	}
	if (count >= argv_tab[4 + col])
		return (1);
	return (0);
}

int		seen_from_left(int **grid, int *argv_tab, int row)
{
	int i;
	int count;
	int last;

	i = 0;
	count = 0;
	last = 0;
	while (i <= 3)
	{
		if (grid[row][i] >= last)
		{
			count++;
			last = grid[row][i];
		}
		i++;
	}
	if (count >= argv_tab[8 + row])
		return (1);
	return (0);
}

int		seen_from_right(int **grid, int *argv_tab, int row)
{
	int i;
	int count;
	int last;

	i = 3;
	count = 0;
	last = 0;
	while (i >= 0)
	{
		if (grid[row][i] >= last)
		{
			count++;
			last = grid[row][i];
		}
		i--;
	}
	if (count >= argv_tab[12 + row])
		return (1);
	return (0);
}
