/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmontgom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:19:43 by lmontgom          #+#    #+#             */
/*   Updated: 2022/03/10 17:23:02 by lmontgom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	c = '0';
	while (c <= '9')
	{	
		a = c + 1;
		while (a <= '9')
		{
			b = a + 1;
			while (b <= '9')
			{
				if (c != a && a != b && b != c)
				{
					write(1, &c,1);
					write(1, &a,1);
					write(1, &b, 1);
					if(c < '7')
						write(1, ", ", 2);
					
				}
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
