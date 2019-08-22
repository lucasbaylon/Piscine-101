/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lbaylon <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 16:46:50 by lbaylon      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/06 10:24:38 by lbaylon     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

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
	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int lgdest;

	i = 0;
	lgdest = ft_strlen(dest);
	while (i < nb && src[i])
	{
		dest[lgdest + i] = src[i];
		i++;
	}
	dest[lgdest + i] = '\0';
	return (dest);
}
