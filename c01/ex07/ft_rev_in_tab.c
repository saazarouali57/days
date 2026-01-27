/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_in_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:25:57 by saad              #+#    #+#             */
/*   Updated: 2026/01/17 19:40:07 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a , int *b)//*hna kan3arfo function li katbdl binat 2 dyal int li kaynin f dak l adresses li 3tina*/
{
	int temp;//hna kan3arfo variable temporaire bach nst3mloha f l swap
	temp = *a;
	*a = *b;
	*b = temp; 
}
void	ft_rev_in_tab(int *tab , int size)
{
	int star = 0;//hna kan3arfo variable star bach tbda l index dyal l bidaya
	int end = size - 1;//hna kan3arfo variable end bach tbda l index dyal l nihaya
	while(star < end)/*hadi condition bach nbdaw nswapo 7it ila star wslat l end ma b9ach kayn ma nsawbo*/
	{
		ft_swap(&tab[star] , &tab[end]);/*hna kan3ayto l function ft_swap o kan3tioha l adresses dyal l elements li bghina nsawbo*/
		star++;//hna kanzido 1 l star bach tmchi l l element jaya
		end--;//hna kann9so 1 l end bach tmchi l l element li 9blha
	}
}
int main()
{
	int arr[5] = {5, 4, 3, 2, 1};/*hna kan3arfo array dyal 5 elements o 3tinahom chi 9yamat*/
	int i;//hna kan3arfo variable i bach nst3mloha f l boucle
	ft_rev_in_tab(arr, 5);
	i = 0;/*hna kan3tiw l i l valeur dyal 0 bach nbda n9ra mn l bidaya dyal l array*/
	while(i < 5)/*hna kanb9aw n9raw l array 7it 5 hiya l 9ima dyal size dyal l array*/
	{
		printf("%d ", arr[i]);	
		i++;
	}
	
	
}

