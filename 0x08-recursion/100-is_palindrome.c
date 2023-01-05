#include "main.h"

int rome(char *string, int start, int end);
int _strlen_recursion(char *s);

/**
*is_palindrome - if a string is a palindrome
*@s: string in question
*Return: Always 0
*/
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);
	if (length == 0)
		return (1);
	return (rome(s, 0, length - 1));
}

/**
*_strlen_recursion - length of string
*@s: string
*Return: always  0
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 +  _strlen_recursion(s + 1));
}

/**
*rome - get if it is a palindrome
*@string: string in question
*@start: start of string
*@end: end of string
*Return: always 0
*/
int rome(char *string, int start, int end)
{
	if (start >= end)
		return (1);
	if (string[start] != string[end])
		return (0);
	if (start <= end || start < end + 1)
		return (rome(string, start + 1, end - 1));
	return (1);
}
