/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:43:54 by dayun             #+#    #+#             */
/*   Updated: 2022/04/16 20:22:24 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		i;
	char	a;

	i = 0;
	a = 'a';
	while (i < 26)
	{
		write (1, &a, 1);
		a++;
		i++;
	}
}
/*
int	main()
{
	ft_print_alphabet();
}*/
