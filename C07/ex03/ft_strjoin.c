/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lbaylon <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/16 02:28:38 by lbaylon      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 14:19:55 by lbaylon     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*add_chaine(char **strs, int size, char *tab, char *sep)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			tab[k++] = strs[i][j++];
		i++;
		j = 0;
		if (i < size)
		{
			while (sep[j])
				tab[k++] = sep[j++];
		}
		else
			tab[k] = '\0';
	}
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*tab;
	int		alloc;

	i = 0;
	j = 0;
	alloc = 0;
	if (size == 0)
	{
		return ("");
	}
	while (i < size)
	{
		alloc += ft_strlen(strs[i]);
		i++;
	}
	alloc += ft_strlen(sep) * (size - 1);
	tab = malloc(sizeof(char) * (alloc + 1));
	if (tab == NULL)
		return (0);
	tab = add_chaine(strs, size, tab, sep);
	return (tab);
}
