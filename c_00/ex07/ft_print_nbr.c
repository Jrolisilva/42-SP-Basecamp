#include <unistd.h>

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-oli <jade-oli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 19:40:59 by jade-oli          #+#    #+#             */
/*   Updated: 2021/06/18 19:41:00 by jade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr (int nb)
{
	char	p;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 10)
	{
		p = nb + '0';
		write(1, &p, 1);
	}
}
