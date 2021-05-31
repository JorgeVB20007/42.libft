#include "libft.h"
#include <stdio.h>

int	count_rows(char const *s, char c)
{
	int	a;
	int	h;

	a = 0;
	h = 0;
	while (s[a] == c)
		a++;
	while (s[a] != '\0')
	{
		if (s[a] == c)
		{
			h++;
			a++;
			while (s[a] == c)
				a++;
		}
		else
			a++;
	}
	if (s[a - 1] == c)
		return (h + 1);
	else
		return (h + 2);
}

int	row_locator(char const *s, char c, int a, int b)
{
	int	d;

	d = 0;
	while (d < a)
	{
		if (s[b] == c)
		{
			d++;
			b++;
			while (s[b] == c)
			{
				b++;
			}
		}
		else
			b++;
	}
	return (b);
}

char	*column_gen(char const *s, char c, int a)
{
	char	*result;
	int		b;
	int		e;

	b = 0;
	while (s[b] == c)
	{
		b++;
	}
	b = row_locator(s, c, a, b);
	e = 0;
	while (s[e + b] != c && s[e + b] != 0)
		e++;
	result = malloc(e + 1);
	e = 0;
	while (s[b + e] != c && s[b + e] != 0)
	{
		result[e] = s[b + e];
		e++;
	}
	result[e] = '\0';
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		rows;
	char	**result;
	int		a;

	if (s[0] == '\0')
	{
		result = malloc(sizeof(char *));
		result[0] = NULL;
		return (result);
	}
	if (c == '\0')
	{
		return (NULL);
	}
	a = 0;
	a = 0;
	rows = count_rows(s, c);
	result = malloc(sizeof(char *) * rows);
	while (a < rows - 1)
	{
		result[a] = column_gen(s, c, a);
		a++;
	}
	result[rows - 1] = NULL;
	return (result);
}

/*
void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main()
{
	char	**tabstr;
	int		i;
	int		arg = 6;

	i = 0;
	if (arg == 1)
	{
		if (!(tabstr = ft_split("          ", ' ')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 2)
	{
		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, 
		consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 3)
	{
		if (!(tabstr = ft_split("   lorem   ipsum dolor     
		sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 4)
	{
		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur a
		dipiscing elit. Sed non risus. Suspendisse 
		lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, 
		dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, 
		semper congue, euismod non, mi.", 'i')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 5)
	{
		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, 
		consectetur adipiscing elit. Sed non risus. Suspendisse 
		lectus tortor, dignissim sit amet, adipiscing nec,
		 ultricies sed, dolor. Cras elementum ultricies diam. 
		 Maecenas ligula massa, varius a, semper congue, euismod 
		 non, mi.", 'z')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	}
	else if (arg == 6)
	{
		if (!(tabstr = ft_split("", 'z')))
			ft_print_result("NULL");
		else
			if (!tabstr[0])
				ft_print_result("ok\n");
	}
	return (0);
}*/