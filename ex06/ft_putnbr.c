/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamfer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 12:13:35 by okamfer           #+#    #+#             */
/*   Updated: 2020/06/21 13:01:30 by okamfer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(nb)
{
	write(1, &nb, 1);
	
}

int main(void)
{
	ft_putchar(18);
	ft_putchar('\n');
	return (0);
}

			

		
