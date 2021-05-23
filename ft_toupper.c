#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else
		return (c);
}

/*
int main()
{
	int a = 0;
	int b = 0;
	while (a < 256)
	{
		if (toupper(a) == ft_toupper(a))
		{
			if (a >= 'a' && a <= 'z')
				printf("*%d* ", ft_toupper(a));
			else
				printf("%d ", ft_toupper(a));
		}
		else
		{
			printf("ERROR at %d - %d / %d\n", a, toupper(a), ft_toupper(a));
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