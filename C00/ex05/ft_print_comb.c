/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmontgom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:19:43 by lmontgom          #+#    #+#             */
/*   Updated: 2022/03/09 19:28:24 by lmontgom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
	char	a;

	char	b;

	char	c;

	a = '0';
	b = '1';
	c = '2';
	while(c >= '9')
	{
		write(1, &c, 1);
		
		while(a >= '9')
		{
			write(1, &a, 1);
			a++;

			while(b >= '9')
			{
				write(1, &b, 1);
				b++;
			}
			a++;	
		}	
		c++;		
	}
}
void	main(void)
{
	ft_print_comb();
}
