/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-oli <jade-oli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 19:35:58 by jade-oli          #+#    #+#             */
/*   Updated: 2021/06/18 19:35:59 by jade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	str1;
	int	str2;

	str1 = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[str1] != '\0')
	{
		str2 = 0;
		while (str[str1 + str2] == to_find[str2] && str[str1 + str2] != '\0')
		{
			if (to_find[str2 + 1] == '\0')
				return (str + str1);
			str2++;
		}
		str1++;
	}
	return (0);
}
