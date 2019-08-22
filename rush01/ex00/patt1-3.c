/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   patt1-3.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jotrique <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 16:54:35 by jotrique     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 17:15:53 by jotrique    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		check1_3(grid, row, col)
{
	int pattern[4];
	int i;
	int j;

	i = 0;
	pattern = {4, 2, 3, 1};
	while (i <= 3)
	{
		j = row != 0 ? grid[row][i] : grid[i][col] ;
		if (j != pattern[i])
			return (0);
	}
	i = 1;
	pattern = {4, 1, 3, 2};
	while (i <= 3)
	{
		j = row != 0 ? grid[row][i] : grid[i][col] ;
		if (j != pattern[i])
			return (0);
	}
	return (1);
}
