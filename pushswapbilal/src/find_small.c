#include <stdio.h>

int	find_small(char	*str)
{
	int	i;
	int	j;
	char	small;
	i = 0;
	j = 0;
	small = str[0];
	while (str[i])
	{
		if (ft_atoi(str[i]) < ft_atoi(small))
		{
			small = str[i];
			j = i;
		}
		i++;
	}
	return (j);
}
