/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 18:10:23 by saad              #+#    #+#             */
/*   Updated: 2025/12/22 18:24:18 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(!((str[i] >= 'a' && str[i] <= 'z')  || (str[i] >= 'A' && str[i] <= 'Z')))
		return 0;
		i++;
	}
	return 1;
}
int main()
{
	printf("%d\n", ft_str_is_alpha("salam"));
	printf("%d\n", ft_str_is_alpha("123"));
	printf("%d\n", ft_str_is_alpha(""));
}
