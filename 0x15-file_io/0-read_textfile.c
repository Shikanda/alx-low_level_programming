#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
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
	int rbyte;
	int wbyte;

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL || filename == NULL)
		return (0);


	fname = open(filename, O_RDONLY);

	if (fname < 0)
	{
		free(buff);
		return (0);
	}

	rbyte = read(fname, buff, letters);
	if (rbyte < 0)
	{
		close(fname);
		free(buff);
		return (0);
	}
	wbyte = write(STDOUT_FILENO, buff, rbyte);

	if (wbyte < 0 || wbyte != rbyte)
	{
		close(fname);
		free(buff);
		return (0);
	}

	free(buff);
	close(fname);
	return (rbyte);
}
