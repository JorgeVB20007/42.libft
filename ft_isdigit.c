#include "libft.h"

int	ft_isdigit(int c)
{
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
		if (isdigit(a) == ft_isdigit(a))
		{
			printf("%d", ft_isdigit(a));
		}
		else
		{
			printf("ERROR at %d - %d / %d\n", a, isdigit(a), ft_isdigit(a));
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