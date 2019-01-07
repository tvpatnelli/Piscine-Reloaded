/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpatnell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:02:57 by vpatnell          #+#    #+#             */
/*   Updated: 2018/11/08 10:15:54 by vpatnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
		i++;
	if (s1[i] > s2[i])
		return (s1[i] - s2[i]);
	if (s1[i] < s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int cmp;

	i = 1;
	while (--argc)
		while (argv[i])
		{
			j = i + 1;
			while (argv[j])
			{
				ft_strcmp(argv[i], argv[j]);
				cmp = ft_strcmp(argv[i], argv[j]);
				if (cmp > 0)
					ft_swap(&argv[i], &argv[j]);
				j++;
			}
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	return (0);
}
