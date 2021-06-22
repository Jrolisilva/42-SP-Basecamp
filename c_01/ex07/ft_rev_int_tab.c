/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-oli <jade-oli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 19:37:55 by jade-oli          #+#    #+#             */
/*   Updated: 2021/06/18 19:37:56 by jade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int	*tab, int	size)
{
	int n;
	int result;

	n = 0;
	while( n != size / 2)
	{
		result = tab[n];
		tab[n] = tab[size - (n + 1)];
		tab[size -(n + 1)] = result;

		n++;
	}

}

