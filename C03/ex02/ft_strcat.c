/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lbaylon <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 13:27:05 by lbaylon      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/06 10:27:41 by lbaylon     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_strlen(char *str)
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
	*ft_strcat(char *dest, char *src)
{
	int i;
	int lgdest;

	lgdest = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[lgdest + i] = src[i];
		i++;
	}
	dest[lgdest + i] = '\0';
	return (dest);
}
