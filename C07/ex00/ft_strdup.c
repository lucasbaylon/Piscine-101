/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lbaylon <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/12 15:08:21 by lbaylon      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/21 14:20:28 by lbaylon     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
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

char	*ft_strdup(char *src)
{
	char	*newchaine;
	int		lgsrc;

	newchaine = NULL;
	lgsrc = ft_strlen(src);
	newchaine = malloc(sizeof(*newchaine) * (lgsrc + 1));
	if (newchaine == NULL)
	{
		return (0);
	}
	ft_strcpy(newchaine, src);
	return (newchaine);
}
