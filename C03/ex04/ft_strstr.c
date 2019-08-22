/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lbaylon <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 17:27:55 by lbaylon      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/07 11:04:12 by lbaylon     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;

	n = 0;
	if (to_find[n] == '\0')
		return (str);
	while (str[n])
	{
		if (str[n] == to_find[0])
		{
			i = 1;
			while (to_find[i] != '\0' && str[n + i] == to_find[i])
			{
				i++;
			}
			if (to_find[i] == '\0')
			{
				return (&str[n]);
			}
		}
		n++;
	}
	return (0);
}
