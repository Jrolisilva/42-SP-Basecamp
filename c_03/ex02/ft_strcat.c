/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-oli <jade-oli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 19:35:58 by jade-oli          #+#    #+#             */
/*   Updated: 2021/06/18 19:35:59 by jade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	len;

	index = 0;
	len = 0;
	while (dest[index] != '\0')
		index++;
	while (src[len] != '\0')
	{
		dest[index + len] = src[len];
		len++;
	}
	dest[index + len] = '\0';
	return (dest);
}
