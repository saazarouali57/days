/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 18:55:07 by saad              #+#    #+#             */
/*   Updated: 2025/12/22 19:04:59 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int 	ft_str_is_printable(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(!(str[i] >= 32 && str[i] <= 126))
		return 0;
		i++;
	}
	return 1;
}
int main()
{
	printf("%d\n", ft_str_is_printable("123bccvDDDDDG"));
	printf("%d\n", ft_str_is_printable("123bccv\t\0DDDDDG"));
	printf("%d\n", ft_str_is_printable("123bc\ncvDDDDDG"));
	printf("%d\n", ft_str_is_printable(""));

}
