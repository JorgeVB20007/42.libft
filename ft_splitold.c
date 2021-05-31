#include "libft.h"
#include <stdio.h>
int countrows(char const *s, char c)
{
	int a;
	int rows;
	char rowschar;

	a = 0;
	rows = 0;
	while (s[a] != 0)
	{
		if (s[a] == c)
			rows++;
		a++;
	}
	rows++;
	write(1, "\nRows: ", 7);
	rowschar = rows + 48;
	write(1, &rowschar, 1);
	write(1, ".\n", 2);
	return (rows);
}

char **createcolumns(char const *s, char c, char **result)
{
	int a;
	int v;
	int h;
	char rowschar;

	a = 0;
	v = 0;
	h = 0;
	while (s[a] != 0)
	{
		if (s[a] == c)
		{
			result[v] = malloc(h + 1);
			rowschar = h + 48;
			write(1, "> ", 2);
			write(1, &rowschar, 1);
			write(1, " <\n", 3);
			v++;
			h = -1;
		}
		h++;
		a++;
	}
	result[v] = malloc(h + 1);
	v++;
	result[v] = malloc(1);
	result[v] = NULL;
	return (result);
}

char **fillcolumns(char const *s, char c, char **result)
{
	int a;
	int v;
	int h;

	a = 0;
	v = 0;
	h = 0;
	while (s[a] != 0)
	{
		if (s[a] == c)
		{
			write(1, "\\0", 2);
			result[v][h] = 0;
			v++;
			h = -1;
		}
		else
		{
			write(1, &s[a], 1);
			result[v][h] = s[a];
		}
		a++;
		h++;
	}
	write(1, "\\0", 2);
	result[v][h] = 0;
	return (result);
}



char **ft_splitold(char const *s, char c)
{
	int rows;
	char **result;

	if (s[0] == 0)
		return (NULL);
	if (c == 0)
		return (NULL);
	rows = countrows(s, c);
	write(1, "\nRows counted! :)\n", 18);
	result = malloc(rows + 1);
	result = createcolumns(s, c, result);
	write(1, "\nColumns created! :D\n", 21);
	result = fillcolumns(s, c, result);
	write(1, "\nColumns filled! ^_^\n", 21);	
	return (result);

}



#include <unistd.h>
void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
//	write(1, s, len);
}

int	main(void)
{
	int		i;
	int		arg;
	char	**tabstr;

	i = 0;

// ---- HERE ----

	arg = 2; 

// ---- HERE ----

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
		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
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
		if (!(tabstr = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ')))
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
		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i')))
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
		if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z')))
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

}