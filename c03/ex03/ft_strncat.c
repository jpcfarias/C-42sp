/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-2 <jpedro-2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:32:13 by jpedro-2          #+#    #+#             */
/*   Updated: 2022/04/25 04:35:25 by jpedro-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		++i;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = 0;
	return (dest);
}
