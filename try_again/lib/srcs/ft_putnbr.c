void	ft_putchar(char c);

void	ft_putnbr(int nbr)
{
	if(nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nbr = 147483648;
	}
	if(nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if(0 <= nbr && nbr <= 9)
		ft_putchar(nbr + '0');
	if(10 <= nbr)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}
