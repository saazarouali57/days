/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_numeric.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:45:02 by saad              #+#    #+#             */
/*   Updated: 2025/12/22 17:00:15 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int	ft_is_numeric(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
		return 0;
		i++;
	}
	return 1;
}
int main()
{
	printf("%d\n" , ft_is_numeric("salam"));
	printf("%d\n" , ft_is_numeric("1337"));
	printf("%d\n" , ft_is_numeric(""));
}
