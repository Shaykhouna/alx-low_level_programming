#include "main.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reader
 * @filename: file to act upon
 * @letters: numbers of letters to print
 *
 * Return: 0 or numbers of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ofile, rfile, wfile;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(chr) * letters);
	if (buffer == NULL)
		return (0);
	ofile = open(filename, O_RDONLY);
	rfile = read(ofile, buf, letters);
	wfile = write(STDOUT_FILENO, buf, r);

	if (ofile == -1 || rfile == -1 || wfile == -1 || wfile != rfile)
	{
		free(buf);
		return 0;
	}
	free(buf);
	return (0);
	return (wfile);
}
