/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 18:39:44 by saad              #+#    #+#             */
/*   Updated: 2026/05/10 19:54:43 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>
int		ft_ultimate_range(int **range, int min, int max)
{
	if(min >= max)
	{
		*range = NULL;
		return 0;
	}
	int len = max - min;

	*range = malloc(len * sizeof(int));
	if(*range == NULL)
		return -1;
	int i = 0;
	while(i < len  )
	{
		(*range)[i] = min + i;
		i++;
	}
	return len;
}
int main()
{
	int *tab = NULL;
	int len;

	len = ft_ultimate_range(&tab , -9 , 4);
	printf("len = %d\n" , len);
	int i = 0;
	while(i < len)
	{
		printf("%d\n" , tab[i]);
		i++;
	}

}
