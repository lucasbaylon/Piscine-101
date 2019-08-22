/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lbaylon <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/13 06:38:48 by lbaylon      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 14:20:37 by lbaylon     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *tabint;

	if (min >= max)
	{
		tabint = NULL;
		return (0);
	}
	i = 0;
	tabint = (int*)malloc(sizeof(int) * (max - min));
	if (tabint == NULL)
	{
		return (0);
	}
	while (min < max)
	{
		tabint[i] = min;
		i++;
		min++;
	}
	return (tabint);
}
