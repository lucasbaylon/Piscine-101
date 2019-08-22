/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jotrique <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 15:53:21 by jotrique     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 14:55:57 by jotrique    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_skyscraper(int **grid, int *argv_tab, int row, int col);
void	*ft_make_grid(int **grid);
void	*ft_make_tab(char *argv[]);

int		main(int argc, char *argv[])
{
	(void)argc;
	int grid[4][4];
	int argv_tab[16];
	int	coor[2];

	if (strlen(argv[1]) != 16 + 15)
	{
		ft_putstr("Error\n");
		return (0);
	}
	coor[0] = 0;
	coor[1] = 0;
	ft_make_tab(argv[1]);
	ft_make_grid(grid);
	if (ft_strlen(argv[1]) != 16)
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_skyscraper((int**)grid, argv_tab, coor);
	return (0);
}
