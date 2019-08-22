/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_make_tab.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jotrique <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 15:48:53 by jotrique     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 14:16:56 by jotrique    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi(char *str);

void		*ft_make_tab(char *argv[])
{
	int *tab;
	int i;
	int j;

	i = 0;
	j = 0;
	tab = (int*)malloc(sizeof(int) * 16);
	while (argv[1][i])
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '4')
		{
			tab[j] = ft_atoi(&argv[1][i]);
			j++;
		}
		i++;
	}

