/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dayun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 09:26:48 by dayun             #+#    #+#             */
/*   Updated: 2022/04/19 12:56:14 by dayun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	a;

	i = 0;
	while (str[i])
	{
		a = str[i];
		if (! (a >= 'a' && a <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
