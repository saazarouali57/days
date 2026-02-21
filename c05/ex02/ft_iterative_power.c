/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 14:41:20 by saad              #+#    #+#             */
/*   Updated: 2026/02/05 14:17:33 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int	ft_iterative_power(int nb , int power)
{
	int result;
	if(power == 0)
		return 1;
	if(power < 0)
		return 0;
	result = 1;
	while(power > 0)
	{
		result *= nb;
		power--;
	}
	return result;
	
} 
int main()
{
	printf("%d\n", ft_iterative_power(4 , 2));
}
