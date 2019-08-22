/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lbaylon <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/06 06:38:40 by lbaylon      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 14:20:57 by lbaylon     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int
	ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

unsigned int
	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int lgdest;
	unsigned int res;

	lgdest = ft_strlen(dest);
	res = ft_strlen(src);
	if (size <= lgdest)
		res += size;
	else
		res += lgdest;
	i = 0;
	while (src[i] != '\0' && lgdest + 1 < size)
	{
		dest[lgdest] = src[i];
		lgdest++;
		i++;
	}
	dest[lgdest] = '\0';
	return (res);
}
