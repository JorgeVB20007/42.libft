#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hs;
	char	*nl;
	size_t	contr;
	int		subcontr;

	hs = (char *)haystack;
	nl = (char *)needle;
	contr = 0;
	if (nl[0] == 0)
		return (hs);
	while (contr < len && hs[contr] != 0)
	{
		subcontr = 0;
		if (hs[contr] == nl[0])
		{
			while (nl[subcontr] == hs[contr + subcontr] && nl[subcontr] != 0)
				subcontr++;
			if (contr + subcontr > len)
				return (NULL);
			if (nl[subcontr] == 0)
				return (&hs[contr]);
		}
		contr++;
	}
	return (NULL);
}

/*
#include <unistd.h>
#include <string.h>
void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int main()
{
	const char *str;
	if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15)))
		ft_print_result("NULL");
	else
		ft_print_result(str);
}
*/