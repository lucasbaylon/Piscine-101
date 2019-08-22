/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rush02.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pauboute <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 13:41:20 by pauboute     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/03 14:04:30 by pauboute    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_putchar(char c);
void	first_line(int x);
void	last_line(int x);
void	middle_line(int x);

int		rush(int x, int y)
{
	int	line;

	line = 0;
	if (x <= 0 || y <= 0)
		return (0);
	while (line < y)
	{
		if (line == 0)
		{
			first_line(x);
		}
		else if (line == y - 1)
		{
			last_line(x);
		}
		else
		{
			middle_line(x);
		}
		ft_putchar('\n');
		line++;
	}
	return (0);
}

void	first_line(int x)
{
	int	colonne;

	colonne = 0;
	while (colonne < x)
	{
		if (colonne == 0)
		{
			ft_putchar('A');
		}
		else if (colonne == x - 1)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
		}
		colonne++;
	}
}

void	last_line(int x)
{
	int	colonne;

	colonne = 0;
	while (colonne < x)
	{
		if (colonne == 0)
		{
			ft_putchar('C');
		}
		else if (colonne == x - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		colonne++;
	}
}

void	middle_line(int x)
{
	int	colonne;

	colonne = 0;
	while (colonne < x)
	{
		if (colonne == 0)
		{
			ft_putchar('B');
		}
		else if (colonne == x - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		colonne++;
	}
}
