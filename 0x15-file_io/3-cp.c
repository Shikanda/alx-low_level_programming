#include "main.h"

void printerror(char *errmsg, char *file, int retval);
/**
*main - copies stuff from 1 file to another
*@argc: args passed
*@argv: pointer to array containing args
*
*Return: 0 if successfull
 */
int main(int argc, char **argv)
{
	int fname;
	int fcpy;
	int writ;
	int red;
	char buff[1024];

	if (argc != 3)
		printerror("Usage: cp_file_from_file_to", "", 97);

	fname = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fname == -1)
		printerror("Error: Can't write to ", argv[2], 99);

	fcpy = open(argv[1], O_RDONLY);
	if (fcpy == -1)
		printerror("Error: Can't read from file ", argv[1], 98);

	do {
		red = read(fcpy, buff, 1024);
		if (red == -1)
			printerror("Error: Can't read from file ", argv[1], 98);

		 writ = write(fname, buff, red);
		if (red == -1 || writ != red)
			printerror("Error: Can't write to ", argv[2], 99);
	} while (writ  == 1024);

	if (close(fcpy))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fcpy);
		exit(100);
	}
	if (close(fname))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fname);
		exit(100);
	}
	return (0);

}

/**
*printerror - print errors
*@errmsg: to print
*@file: file name
*@retval: exit value
*Return: void
*/

void printerror(char *errmsg, char *file, int retval)
{
	dprintf(STDERR_FILENO, "%s%s\n", errmsg, file);
	exit(retval);
}
