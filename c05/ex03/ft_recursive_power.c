/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:35:35 by saad              #+#    #+#             */
/*   Updated: 2026/02/05 14:44:08 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int ft_recursive_power(int nb, int power)
{
	if(power == 0)
		return 1;
	if(power < 0)
		return 0;
	return (nb * ft_recursive_power(nb , power - 1)); 
}
#include<stdio.h>
int main()
{
	int nb = 4;
	int power = 4;
	printf("%d\n", ft_recursive_power(nb , power));
}
