/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 13:14:22 by saad              #+#    #+#             */
/*   Updated: 2026/02/01 13:27:07 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int ft_iterative_factorial(int nb)
{
	int result;
	if (nb < 0)
	{
		return 0;
	}
	result = 1;
	while(nb > 0)
	{
		result *= nb;
		nb --;
	}
	return result;
}
int main()
{
	int n = 5;
	printf("%d\n", ft_iterative_factorial(n));

}
