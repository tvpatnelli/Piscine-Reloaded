/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpatnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:14:42 by vpatnell          #+#    #+#             */
/*   Updated: 2018/11/06 14:29:46 by vpatnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int i;
	int n;

	i = '0';
	n = '9';
	while (i <= n)
	{
		ft_putchar(i);
		i++;
	}
}
