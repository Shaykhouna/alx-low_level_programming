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
	ssize_t rfile, wfile;
	int file;
	char *buf;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buf);
		return (0);
	}
	rfile = read(file, buffer, letters);
	if (rfile == -1)
		return (0);
	wfile = write(STDOUT_FILENO, buf, rfile);
	if (wfile == -1 || rfile != wfile)
		return (0);
	free(buf);
	close(file);
	return(wfile);
}
