#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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
		if (isalpha(a) == ft_isalpha(a))
		{
			printf("%d", ft_isalpha(a));
		}
		else
		{
			printf("ERROR at %d - %d / %d\n", a, isalpha(a), ft_isalpha(a));
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