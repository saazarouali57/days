/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 17:03:13 by saad              #+#    #+#             */
/*   Updated: 2026/01/17 19:40:07 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_ft(int *nbr)//hna kan3arfo function li katakhod pointer l int o katb9a tbdl l valeur dyal l int li kayn f dak l adresse
{
    *nbr = 42; //hna kanbdlo l valeur dyal l int li kayn f dak l adresse b 42

}
#include <stdio.h>//hna kaninclude l library dyal stdio.h bach n9dro nst3mlo printf f l main o nwarriw resultat dyal l function
int main()
{
    int P = 0;//hna kan3arfo variable int smitha P o 3tinaha l valeur dyal 0
    ft_ft(&P);//hna kan3ayto l function ft_ft o kan3tioha l adresse dyal P bach tbdl l valeur dyal P b 42
    printf("%d\n", P);//hna kanst3mlo printf bach nwarriw l valeur dyal P li daba ghadi tkun 42
    return (0);
}
