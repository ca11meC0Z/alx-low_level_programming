#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: string.
 */
char *cap_string(char *str)
{
	int idx = 0;

	while (str[idx])
	{
		while (!(str[idx] >= 97 && str[idx] <= 122))
			idx++;

		if (str[idx - 1] == ' ' ||
		    str[idx - 1] == '\t' ||
		    str[idx - 1] == '\n' ||
		    str[idx - 1] == ',' ||
		    str[idx - 1] == ';' ||
		    str[idx - 1] == '.' ||
		    str[idx - 1] == '!' ||
		    str[idx - 1] == '?' ||
		    str[idx - 1] == '"' ||
		    str[idx - 1] == '(' ||
		    str[idx - 1] == ')' ||
		    str[idx - 1] == '{' ||
		    str[idx - 1] == '}' ||
		    idx == 0)
			str[idx] -= 32;

		idx++;
	}

	return (str);
}
