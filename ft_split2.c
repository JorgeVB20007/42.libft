#include "libft.h"
#include <stdio.h>

char **build_rows(char const *s, char c)
{
	int a;
	int h;

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
//	printf("Total chars: %d\n", a);
	if (s[a - 1] == c)
		return(malloc(h + 1));
	else
		return(malloc(h + 2));
}

char	**build_columns(char const *s, char c, char **result)
{
	int	h;
	int	v;
	int a;

	v = 0;
	h = 0;
	a = 0;
	while (s[a] == c)
		a++;
	while (s[a] != '\0')
	{
		if (s[a] == c)
		{
			result[v] = malloc(h + 1);
			printf("%d (%d)  -  ", v, h);
			h = 0;
			v++;
			a++;
			while (s[a] == c)
				a++;
		}
		else
		{
			printf("%c", s[a]);
			h++;
			a++;
		}
			
		
	}
	if (s[a - 1] != c)
	{
		result[v] = malloc(h + 1);
		printf("%d (%d)  -  ", v, h);
		v++;
	}
	result[v] = NULL;
	return (result);
}


char	**fill_columns(char const *s, char c, char **result)
{
	int v;
	int h;
	int a;
	char tempo;

	v = 0;
	h = 0;
	a = 0;
	while (s[a] == c)
		a++;
	printf("Starting loop...\n");
	while (s[a] != '\0')
	{
		printf("%d - %c ", a, s[a]);
		if (s[a] == c)
		{
			result[v][h] = '\0';
			printf("+ v%d h%d   %s  Next: %c\n", v, h, result[v], s[a + 1]);
			v++;
			h = 0;
			a++;
			while (s[a] == c)
				a++;
			/*if (v == 12)
				v++;*/
		}
		else
		{
			write(1, "  ", 1);
			tempo = v + 49;
			write(1, &tempo, 1);
			write(1, "  ", 2);
			tempo = h + 49;
			write(1, &tempo, 1);
			write(1, "  ", 1);
			write(1, "*", 1);
			printf("- v%d h%d\n", v, h);
			result[v][0] = s[a];
			write(1, "%%", 1);
			h++;
			a++;
		}
	}
//	printf("\nLoop ended!\n");
	if (s[a - 1] != c)
	{
		result[v][h] = '\0';
//		printf("");
	}
	return (result);
}


char	**ft_split2(char const *s, char c)
{
//	int rows;
	char **result;

	printf("Starting");
	result = build_rows(s, c);
	printf("\nRows successfully built! :)\n");
	result = build_columns(s, c, result);
	printf("\nColumns successfully built! :D\n");
	result = fill_columns(s, c, result);
	printf("\nColumns successfully filled! ^_^\n");
	return (result);
}


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
	int		arg = 4;


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
	return (0);
}