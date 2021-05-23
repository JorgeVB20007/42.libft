#include <stdio.h> 
#include <stdlib.h> 

char	*minnumber(int n)
{
	char	*a;

	if (n == -2147483648)
	{
		a = malloc(12);
		a[0] = '-';
		a[1] = '2';
		a[2] = '1';
		a[3] = '4';
		a[4] = '7';
		a[5] = '4';
		a[6] = '8';
		a[7] = '3';
		a[8] = '6';
		a[9] = '4';
		a[10] = '8';
		a[11] = 0;
	}
	else
	{
		a = malloc(2);
		a[0] = '0';
		a[1] = 0;
	}
	return (a);
}

int	checklong(int n)
{
	int	p;

	p = 0;
	while (n != 0)
	{
		n = n / 10;
		p++;
	}
	return (p);
}

char	*ft_itoa(int n)
{
	int		neg;
	int		largo;
	char	*result;

	neg = 0;
	largo = 0;
	if (n == -2147483648 || n == 0)
		return (minnumber(n));
	else if (n < 0)
		neg = 1;
	if (neg == 1)
		n = n * -1;
	largo = checklong(n);
	result = malloc(largo + neg + 1);
	if (!result)
		return (0);
	result[largo + neg] = 0;
	result[0] = '-';
	while (n > 0)
	{
		result[largo - !neg] = (n % 10) + 48;
		n = n / 10;
		largo--;
	}
	return (result);
}

/*
int main()
{
	int a;
	int b;

	a = 2147483647;
	while (a != 0)
	{
		printf("\n*** %s ***\n", ft_itoa(a));
		a = a/2;
	}
	a = -2147483648;
	while (a != 0)
	{
		printf("\n*** %s ***\n", ft_itoa(a));
		a = a/2;
	}
	printf("\n*** %s ***\n", ft_itoa(0));
	printf("\nYour own: %s\n\n", ft_itoa(-314159265));
	
	b = -2147483648;
	while (b < 2147483647)
	{
		if (atoi(ft_itoa(b)) == b)
		{
			printf(",");
		}
		else
			printf("/");
		b = b + 1;
	}
}
*/