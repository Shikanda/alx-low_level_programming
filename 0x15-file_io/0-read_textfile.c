#include "main.h"

/**
*read_textfile -reads a text file and prints it to the POSIX stdout
*@filename: stream of the file to be read
*@letters: number of letters it should read and print
*
*Return: no of letters it could read or print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fname;
	char *buff;
	ssize_t rbyte;
	ssize_t wbyte;

	if (!filename)
		return (0);


	fname = open(filename, O_RDONLY);

	if (fname == -1)
		return (0);

	buff = malloc(letters);

	if (!buff)
	return (0);

	rbyte = read(fname, buff, letters);
	if (rbyte == -1)
	{
		free(buff);
		return (0);
	}

	wbyte = write(STDOUT_FILENO, buff, rbyte);

	if (wbyte == -1 || wbyte != rbyte)
	{
		free(buff);
		return (0);
	}

	free(buff);
	return (rbyte);
}
