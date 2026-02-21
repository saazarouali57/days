/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 16:56:33 by saad              #+#    #+#             */
/*   Updated: 2025/12/19 17:22:19 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void	ft_sort_in_tab(int *tab , int size)
{
	int i;
	int j;
	i = 0;
	while(i < size -1)
	{

		j = i + 1;
		while(j < size)
		{
			if(tab[i] > tab[j])
			ft_swap(&tab[i] , &tab[j]);
			j++;
		}
		i++;
	}
}
int main()
{
    int tab[] = {4, 2, 5, 1};
    int size = 4;
    int i = 0;

    ft_sort_in_tab(tab, size);

    printf("Sorted array: ");
    while(i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");

    return 0;
}
