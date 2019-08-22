/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lbaylon <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 14:50:47 by lbaylon      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 14:50:49 by lbaylon     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int i;

	i = 0;
	if (nb >= 0)
	{
		i = nb;
	}
	if (nb < 0)
	{
		i = nb * -1;
		ft_putchar('-');
	}
	if (i >= 10)
	{
		ft_putnbr(i / 10);
	}
	ft_putchar((i % 10) + '0');
}
