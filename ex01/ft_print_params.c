/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:19:42 by saad              #+#    #+#             */
/*   Updated: 2026/01/15 16:34:00 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_print_params(char *str)
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
	while(i < argc)
	{
		ft_print_params(argv[i]);
		i++;
	}
}
