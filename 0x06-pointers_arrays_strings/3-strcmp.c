#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return:
 * 		returns 0 if s1 == s2
 * 		returns negative number if s1 < s2
 * 		returns positive number if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, diff = 0;

	while (a)
	{
		if (s1[a] == '\0' && s2[a] == '\0')
			break;
		else if (s1[a] == '\0')
		{
			diff = s2[a];
			break;
		}
		else if (s2[a] == '\0')
		{
			diff == '\0';
			break;
		}
		else if (s1[a] != s2[a])
		{
			diff = s1[a] - s2[a];
			break;
		}
		else
			a++;
	}
	return (diff);
}
