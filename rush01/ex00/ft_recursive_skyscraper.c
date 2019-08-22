/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_skyscraper.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jotrique <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 16:56:05 by jotrique     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 16:24:28 by jotrique    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_skyscraper(int **grid, int *argv_tab, int row, int col)
{
	int i;

	if (find_empty_spot(grid, row, col) == 0)
		if (verif)
			return (1);
		else
			return (0);
	i = 1;
	while (i <= 4)
	{
		// dupliquer avec que col d un cote, que row de l autre
		if (is_valid(grid, argv_tab, row, col, i))
		{
			grid[row][col] = i;

			if (ft_skycraper(grid, argv_tab, row, col))
											// row++ || col++
				return (1);
			grid[row][col] = 0;
		}
		i++;
	}
	return (0); 
}
