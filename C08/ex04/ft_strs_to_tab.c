/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strs_to_tab.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lbaylon <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/14 12:57:57 by lbaylon      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/15 17:45:38 by lbaylon     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int
	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char
	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char
	*ft_strdup(char *src)
{
	char	*newchaine;
	int		lgsrc;

	newchaine = NULL;
	lgsrc = ft_strlen(src);
	newchaine = malloc(sizeof(*newchaine) * (lgsrc + 1));
	ft_strcpy(newchaine, src);
	return (newchaine);
}

struct s_stock_str
	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str *tab;

	i = 0;
	tab = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (0);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = ft_strdup(av[i]);
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
