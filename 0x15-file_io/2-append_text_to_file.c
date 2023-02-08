#include "main.h"

int _strlen(char *s);
/**
*append_text_to_file -appends text to an existing file
*@filename: name of the file
*@text_content: null terminated string to add to the file
*
*Return: 1 if successfull or -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int length;
	int fname;
	int writ;

	if (filename == NULL)
		return (-1);

	fname = open(filename, O_RDWR | O_APPEND);

	if (fname < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fname);
		return (1);
	}

	length = _strlen(text_content);
	writ = write(fname, text_content, length);

	if (writ < 1 || writ != length)
		return (-1);
	return (1);
}

/**
*_strlen - gets length of string
*@s: string
*
*Return: length
*/

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s++)
	{
		length++;
	}
	return (length);
}
