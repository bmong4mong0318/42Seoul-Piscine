/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 14:24:40 by dayun             #+#    #+#             */
/*   Updated: 2022/04/26 19:30:53 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	i;
	long long	tmp;

	i = 0;
	tmp = nb;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i <= tmp)
	{
		if (i * i == tmp)
			return (i);
		i++;
	}
	return (0);
}