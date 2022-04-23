/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-2 <jpedro-2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:41:50 by jpedro-2          #+#    #+#             */
/*   Updated: 2022/04/20 17:34:43 by jpedro-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_abs(int nb)
{
	int	abs;

	abs = nb;
	if (nb < 0)
	{
		abs = nb * -1;
	}
	return (abs);
}

void	ft_putnbr(int nb)
{
	int	resto;

	resto = nb % 10;
	resto = ft_abs (resto);
	if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
	}
	if (nb < 0 && nb / 10 == 0)
	{
		ft_putchar('-');
	}
	ft_putchar(resto + '0');
}
