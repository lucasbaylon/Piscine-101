/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_rev_int_tab.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lbaylon <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/02 14:27:47 by lbaylon      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/22 13:52:10 by lbaylon     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int n;
	int temp;

	i = 0;
	j = 0;
	n = 0;
	temp = 0;
	if (size != 0)
	{
		while (i != size - 1)
			i++;
		if (size % 2 == 0)
			n = -1;
		while (i - n != j)
		{
			temp = tab[i];
			tab[i] = tab[j];
			tab[j] = temp;
			i--;
			j++;
		}
	}
}
