/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lbaylon <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/12 07:50:10 by lbaylon      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/12 15:27:48 by lbaylon     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;
	int nbr;

	res = 1;
	nbr = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nbr <= nb)
	{
		res = res * nbr;
		nbr++;
	}
	return (res);
}
