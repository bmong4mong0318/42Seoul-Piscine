/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonghwk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 12:58:25 by seonghwk          #+#    #+#             */
/*   Updated: 2022/04/17 21:05:59 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	four_corners(int i, int j)
{
	if (i == 1 && j == 1)
		ft_putchar('A');
	else if (i != 1 && j == 1)
		ft_putchar('A');
	else if (i == 1 && j != 1)
		ft_putchar('C');
	else
		ft_putchar('C');
}

void	rush(int x, int y)
{
	int		i;	
	int		j;	

	i = 1;
	j = 1;
	while (j <= y)
	{
		while (i <= x)
		{
			if ((i == 1 || i == x) && (j == 1 || j == y))
				four_corners(i, j);
			else if ((i > 1 && i < x) && (j == 1 || j == y))
				ft_putchar('B');
			else if ((i == 1 || i == x) && (j > 1 && j < y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		i = 1;
		j++;
	}
}
