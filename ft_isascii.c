#include <stdio.h>
#include <ctype.h>
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
		if (isascii(a) == ft_isascii(a))
		{
			printf("%d", ft_isascii(a));
		}
		else
		{
			printf("ERROR at %d - %d / %d\n", a, isascii(a), ft_isascii(a));
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