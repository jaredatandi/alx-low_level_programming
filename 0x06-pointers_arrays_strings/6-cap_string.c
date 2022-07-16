#include "main.h"

/**
 * cap_string - capitilize each word
 * @word: each word
 * Return: a pointer to the string
 */
char *cap_string(char *word)
{
	int i, j;

	char speChar[13] = {'.', ',', ';', ' ',
		'\n', '\t', '"', '!', '?', '(', ')', '{', '}'};

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] == '\t')
			word[i] = ' ';

		if (i == 0 && word[i] >= 'a' && word[i] <= 'z')
			word -= 32;

		for (j = 0; j < 13; j++)
		{
			if (word[i] == speChar[j])
			{
				if (word[i + 1] >= 'a' && word[i + 1] <= 'z')
				{
					word[i + 1] -= 32;
				}
			}
		}
	}
	return (word);

}
