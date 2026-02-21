/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 14:16:02 by saad              #+#    #+#             */
/*   Updated: 2026/02/01 14:31:17 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int	ft_recursive_factorial(int nb)
{
	if(nb == 0 || nb == 1)
		return 1;
	else
	return (nb * ft_recursive_factorial(nb - 1));
}
int main()
{
	int n = 5;
	printf("%d\n", ft_recursive_factorial(n));
}
