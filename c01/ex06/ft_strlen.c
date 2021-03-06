/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-2 <jpedro-2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:40:42 by jpedro-2          #+#    #+#             */
/*   Updated: 2022/04/13 19:42:25 by jpedro-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	tam;

	tam = 0;
	while (*str != '\0')
	{
		str++;
		tam++;
	}
	return (tam);
}
