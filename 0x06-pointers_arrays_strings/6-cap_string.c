#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: new string
 */
char *cap_string(char *s)
{
	int i, j;
	char c[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (s[i] != '\0')
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] = s[0] - 32;
		j = 0;
		while (c[j] != '\0')
		{
			if (s[i] == c[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
			j++;
		}
		i++;
	}
	return (s);
}
