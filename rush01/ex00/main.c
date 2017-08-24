/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarec <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 06:39:24 by amarec            #+#    #+#             */
/*   Updated: 2017/08/13 06:39:25 by amarec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	fill_grid(int argc, char **argv, int **tab_sudoku)
{
	int i;
	int j;

	i = argc - 1;
	j = 0;
	while(i < argc - 1)
	{
		while(j < 9)
		{
			if('1' <= argv[i][j] && argv[i][j] <= '9')
				tab_sudoku[i][j] = argv[i][j];
			else if (1 >= argv[i][j] && argv [i][j])
			{
				write(1, "Error\n", 6);
				return(0);
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	**tab_sudoku;

	tab_sudoku = NULL;
	fill_grid(argc, argv, tab_sudoku);
	return (0);
}
