#include <stdlib.h>
#include <stdio.h>
void ft_sort_integer_table(int *tab, int size)
{
	int index;
	int temp;

	temp = 0;
	index = 0;
	while(index < size)
	{
		if(tab[index] > tab[index + 1])
		{
			temp = tab[index];
			tab[index] = tab[index + 1];
			tab[index + 1] = temp;
			index = 0;
		}
		else
			index++;
	}
}

int main()
{
	int *tab;

	tab = malloc(sizeof(*tab) * 4);

	tab[0] = 9;
	tab[1] = 9;
	tab[2] = 6;
	tab[3] = 8;
	ft_sort_integer_table(tab, 3);
	printf("%d\n", tab[0]);
	printf("%d\n", tab[1]);
	printf("%d\n", tab[2]);
	printf("%d", tab[3]);

	return (0);
}