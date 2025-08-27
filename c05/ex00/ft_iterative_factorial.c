int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = 2;
	if (nb == 0 || nb == 1)
		f = 1;
	else
		f = 1;
		while (i < nb)
		{
			f = f * i;	
			i++;
		}
	return f;
}
int main()
{
	printf("%d",ft_iterative_factorial(5));
}
