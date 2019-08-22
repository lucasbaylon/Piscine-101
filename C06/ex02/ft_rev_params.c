/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_rev_params.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lbaylon <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/09 07:33:58 by lbaylon      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/20 11:49:56 by lbaylon     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void
	ft_putchar(char c)
{
	write(1, &c, 1);
}

int
	main(int argc, char **argv)
{
	int i;

	while (argv[argc - 1] && argc > 1)
	{
		i = 0;
		while (argv[argc - 1][i])
		{
			ft_putchar(argv[argc - 1][i]);
			i++;
		}
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
