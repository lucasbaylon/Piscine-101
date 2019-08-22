/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   mainc.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: abourbou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/10 13:00:43 by abourbou     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/11 19:49:24 by abourbou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


int ft_tri(int argc, char **argv, char cond[16], int *compt)
{
	int compt;
	int i;
	
	i= -1;
	*compt = 0;
	while (argv[1][i++] != '\0')
	{
		if (i % 2 == 0)
		{
			if (argv[1][i] > '4' || argv[1][i] < '1')
			{
				write(1, "Error\n", 6);
				return (0);
			}
			cond[i] = argv[1][i];
			*compt++;
	`	}
		else
		{
			if (argv[1][i] != ' ')
				return (0);
		}
	}
	return (1);
}

int main.c (int argc, char **argv)
{
	char  cond[16];
	int compt;
	
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ft_tri(argc, argv, cond, &compt) == 0)
	{	
		write(1, "Error\n", 6);
		return (0);
	}
	if (compt != 16)
	{
		write(1, "Error\n", 6);
		return (0);
	}	
	return (0);
}
