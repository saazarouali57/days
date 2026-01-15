/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:44:58 by saad              #+#    #+#             */
/*   Updated: 2026/01/15 18:10:15 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int	ft_strcmp(char *s1 , char *s2)
{
	int i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return s1[i] - s2[i];
}
void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{	
		write(1, &str[i], 1);
		i++;
	}
	 write(1, "\n", 1);
}
int main(int argc , char **argv)
{
	int i = 1;
	int j;
	char *temp;
	while(i < argc - 1)
	{
		j = i + 1;
		while(j < argc )
		{
			if(ft_strcmp(argv[i] , argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while(i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
