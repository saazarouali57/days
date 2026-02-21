/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:51:18 by saad              #+#    #+#             */
/*   Updated: 2026/01/28 17:04:52 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nb)
{
	if(nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if(nb > 9)
	ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}
int main()
{
	ft_putnbr(-4);
}
