#include <stdlib.h>
int ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	char		*arr;

	size = max - min;
	i = 0;
	if (min >= max)
	{
		return 0;
	}
	*range = malloc((size) * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return size;
}
int main()
{
	char *arr;
	int i = 0;
	int max = 7;
	int min = 3;
	*arr = ft_ultimate_range(&arr,min);
