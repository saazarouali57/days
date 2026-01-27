/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 22:58:59 by saad              #+#    #+#             */
/*   Updated: 2026/01/17 19:40:07 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);//hna kanb9aw n3ayto 3la l function bach tktb l character f l console
}

void	ft_putnbr(int nb)//
{
	if (nb == -2147483648)//hna khasna n3amlo condition khassa 7it hadi hiya l a9al 9ima li kayn f int o ma n9drosh n7awlouha l positif 7it ghadi t3ti overflow
	{
		write(1, "-2147483648", 11);//
		return;//hna kanrj3o bach ma ykmlch l function hit ila kml ghadi y3ti resultat ghalat o
	}
	if (nb < 0)//hna kancheckiw wach l3adad negatif
	{
		ft_putchar('-')//hna kanb9aw n3ayto 3la l function bach tktb l - bach n3arfo blli l3adad negatifo nhawlou l3adad l positif
		nb = -nb;//hada bach nhawlou l3adad l positif
	}
	if (nb > 9)//hna kanb9aw n3ayto 3la l function bach tktb l3adad kamal 7it ila kan l3adad kbir 3la 9 khasna n9smo 3la 10 bach n7awlou n9smo l3adad l a9sam sghira
	{
		ft_putnbr(nb / 10);
		/*daba hna bda recusion makifouze l ft+putchar ta kisali l9isma dyal 3adad kamal 125 / 10 = 12 
		men mouraha katb9a 12 / 10 = 1 men mouraha kanb9a 1 / 10 = 0 o hna recursion ra mhafade 3la tartib */
	}
	ft_putchar(nb % 10 + '0'); // hna kanst3mlo l modulo bach njibo l9ismat l akhira o n7awlouha l character 
}

int main(void)
{
	ft_putnbr(125);
	write(1, "\n", 1);
	return (0);
}

