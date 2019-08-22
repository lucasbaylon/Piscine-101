/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_make_grid.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jotrique <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/11 13:32:00 by jotrique     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 14:05:35 by jotrique    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

void		*ft_make_grid(int **grid)
{
	int i;
	int j;

	i = 1;
	*grid = (int*)malloc(sizeof(int) * 16);
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}
