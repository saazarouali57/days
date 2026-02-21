/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 19:22:58 by saad              #+#    #+#             */
/*   Updated: 2025/12/22 19:34:03 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
char	*ft_strlowcase(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		str[i] += 32;
		i++;
	}
	return str;
}
int main()
{
	char s[] ="SALAM";
	printf("%s\n", ft_strlowcase(s));
}
