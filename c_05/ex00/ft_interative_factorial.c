/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-oli <jade-oli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 19:35:58 by jade-oli          #+#    #+#             */
/*   Updated: 2021/06/18 19:35:59 by jade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int	nb)
{
	int	factorial;

	factorial = 1;
	if (nb == 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
	{
		factorial = nb * -nb;
		nb--;
	}
	return (factorial);
}
