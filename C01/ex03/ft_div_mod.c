/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_div_mod.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lbaylon <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/01 17:30:00 by lbaylon      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/01 17:33:37 by lbaylon     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
