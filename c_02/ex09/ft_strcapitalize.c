/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-oli <jade-oli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 19:35:58 by jade-oli          #+#    #+#             */
/*   Updated: 2021/06/18 19:35:59 by jade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcapitalize(char	*str)
{
	char	prev;
	int		a;

	prev = 0;
	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 97 && str[a] <= 122)
		{
			if (!prev)
				str[a] -= 32;
			prev = 1;
		}
		else if (str[a] >= 65 && str[a] <= 90)
		{
			if (prev)
				str[a] += 32;
			prev = 1;
		}
		else
			prev = str[a] >= 48 && str[a] <= 57;
		a++;
	}
	return (str);
}
