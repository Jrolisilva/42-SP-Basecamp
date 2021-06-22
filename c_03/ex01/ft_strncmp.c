/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-oli <jade-oli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 19:56:58 by jade-oli          #+#    #+#             */
/*   Updated: 2021/06/18 19:56:59 by jade-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char	*s1, char*s2, unsigned	int n)
{
	unsigned char	a;

	a = 0;
	if (n == 0)
		return (0);
	while ((s1[a] == s2[a]) && (s1[a] != '\0') && (s2[a] != '\0') && a < n - 1)
	{
		a++;
	}
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
