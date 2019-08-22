/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lbaylon <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/12 09:30:49 by lbaylon      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/12 15:30:32 by lbaylon     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int res;
	int i;

	i = 1;
	res = 1;
	if (power < 0)
	{
		return (0);
	}
	while (i <= power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}
