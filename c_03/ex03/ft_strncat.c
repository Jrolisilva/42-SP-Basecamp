/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-oli <jade-oli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 19:35:58 by jade-oli          #+#    #+#             */
/*   Updated: 2021/06/18 19:35:59 by jade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	str1;
	unsigned int	str2;

	str1 = 0;
	str2 = 0;
	while (dest[str1] != '\0')
		str1++;
	while (src[str2] != '\0' && str2 < nb)
	{
		dest[str1] = src[str2];
		str1++;
		str2++;
	}
	dest[str1] = '\0';
	return (dest);
}
