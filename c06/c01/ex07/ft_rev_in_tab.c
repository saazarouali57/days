/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_in_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:25:57 by saad              #+#    #+#             */
/*   Updated: 2025/12/18 15:35:44 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
void	ft_swap(int *a , int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp; 
}
void	ft_rev_in_tab(int *tab , int size)
{
	int star = 0;
	int end = size - 1;
	while(star < end)
	{
		ft_swap(&tab[star] , &tab[end]);
		star++;
		end--;
	}
}
int main()
{
	int arr[5] = {5, 4, 3, 2, 1};
	int i;
	ft_rev_in_tab(arr, 5);
	i = 0;
	while(i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
	
	
}

