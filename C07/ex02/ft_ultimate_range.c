/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_range.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lbaylon <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/19 10:14:46 by lbaylon      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/20 14:29:05 by lbaylon     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *p;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	p = (int*)malloc(sizeof(int) * (max - min));
	if (p == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	*range = p;
	return (i);
}
