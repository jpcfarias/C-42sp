/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-2 <jpedro-2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:33:06 by jpedro-2          #+#    #+#             */
/*   Updated: 2022/04/13 19:36:55 by jpedro-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int	*div, int	*mod)
{
	*div = a / b;
	*mod = a % b;
}
