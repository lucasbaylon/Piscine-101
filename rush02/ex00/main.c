/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lbaylon <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/17 13:28:24 by lbaylon      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 20:27:53 by lbaylon     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft.h"

int		ft_atoi(char *str)
{
	int	i;
	int	n;
	int	nb;

	i = 0;
	n = 1;
	nb = 0;
	while (str[i] == '\t' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n = -n;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * n);
}

int		main(int argc, char **argv)
{
	if ((argc == 1) || (argc > 3))
		ft_error();
	if (argc > 1 && argc < 4)
	{
		if (ft_atoi(argv[1]) != 0 || ft_atoi(argv[2]) != 0)
		{
			if (ft_atoi(argv[1]) < 0 || ft_atoi(argv[2]) < 0)
				ft_error();
		}
		if (argc == 2)
			//Fonction avec valeur a convertir
		if (argc == 3)
		{
			//Fonction avec valeur a convertir et dictionnaire a utiliser
		}
	}
	return (0);
}

