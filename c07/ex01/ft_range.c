/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:41:25 by saad              #+#    #+#             */
/*   Updated: 2026/05/07 17:21:47 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>
int 	*ft_range(int min , int max)
{
	int i = 0; 
	int len = max - min;
	if(min >= max)
	{
		return NULL;
	}
	int *tab = malloc(sizeof(int) * len );
	while(min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return tab;
}
int main()
{
	int *tab;
	int i = 0;
	tab = ft_range(2 , 5);
	while(i < 3)
	{
		printf("%d\n" , tab[i] );
		i++;
	}
	free(tab);

}
