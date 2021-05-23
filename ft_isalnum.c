#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
int main()
{
	int a = 0;
	int b = 0;
	while (a < 256)
	{
		if (isalnum(a) == ft_isalnum(a))
		{
			printf("%d", ft_isalnum(a));
		}
		else
		{
			printf("ERROR at %d - %d / %d\n", a, isalnum(a), ft_isalnum(a));
			b = 1;
		}
		a++;
	}
	if (!b)
		printf("\n\nAll Good here ^_^\n\n");
	else
		printf("Something went wrong.");
	
}
*/