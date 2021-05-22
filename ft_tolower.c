#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
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
		if (tolower(a) == ft_tolower(a))
		{
			if (a >= 'a' && a <= 'z')
				printf("*%d* ", ft_tolower(a));
			else
				printf("%d ", ft_tolower(a));
		}
		else
		{
			printf("ERROR at %d - %d / %d\n", a, tolower(a), ft_tolower(a));
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