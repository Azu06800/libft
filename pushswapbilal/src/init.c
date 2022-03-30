#include <stdlib.h>
#include <stdio.h>

char	*init(char	**argv, int sizep)
{
	int	i;
	int	j;
	char	*a;

	j = sizep;
	i = 1;
	a = malloc(sizeof(char)*(sizep));
	while (pile[i])
	{
		a[j] = pile[i][0];
		i++;
		j--;
	}
	a[++j] = '\0';
	return (a);
}
