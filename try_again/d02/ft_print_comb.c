void  ft_putchar(char c);

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while(a <= 7)
	{
		b = a + 1;
		while(b <= 8)
		{
			c = b + 1;
			while(c <= 9)
			{
				ft_putchar(a + '0');
				ft_putchar(b + '0');
				ft_putchar(c + '0');
				if(a != 7 || b != 8 || c != 9)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int main()
{
  ft_print_comb();
  return (0);
}
