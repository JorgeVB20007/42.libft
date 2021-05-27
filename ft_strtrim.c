#include "libft.h"

int	beggining(char const *s1, char const *set)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	c = 0;
	while (s1[a] != 0)
	{
		b = 0;
		while (set[b] != 0)
		{
			if (s1[a] == set[b])
			{
				c++;
				break ;
			}
			else
				b++;
		}
		if (set[b] == 0)
			break ;
		a++;
	}
	return (c);
}

int	ending(char const *s1, char const *set, int largo)
{
	int	a;
	int	b;
	int	c;

	a = largo - 1;
	b = 0;
	c = 0;
	while (a > 0)
	{
		b = 0;
		while (set[b] != 0)
		{
			if (s1[a] == set[b])
			{
				c++;
				break ;
			}
			else
				b++;
		}
		if (set[b] == 0)
			break ;
		a--;
	}
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		ini;
	int		end;
	int		largo;
	char	*res;
	int		a;

	largo = 0;
	a = 0;
	while (s1[largo] != 0)
		largo++;
	ini = beggining(s1, set);
	end = ending(s1, set, largo);
	res = malloc(end - ini + 1);
	while (a + ini < end)
	{
		res[a] = s1[ini + a - 1];
		a++;
	}
	res[a] = 0;
	return (res);
}
/*
int	main(void)
{
	printf("\n** %s **\n", ft_strtrim("aaaabbdfhbaaaa", "aaa"));
}
*/