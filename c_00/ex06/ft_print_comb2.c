/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-oli <jade-oli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 19:40:31 by jade-oli          #+#    #+#             */
/*   Updated: 2021/06/18 19:40:32 by jade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_print_num(int n)
{
	n = n + 48;
	write(1, &n, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	second = 1;
	while (first < 99)
	{
		while (second < 100)
		{
			ft_print_num(first / 10);
			ft_print_num(first % 10);
			ft_putchar(' ');
			ft_print_num(second / 10);
			ft_print_num(second % 10);
			if (first != 98 || second != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second++;
		}
		first++;
		second = first + 1;
	}
}
