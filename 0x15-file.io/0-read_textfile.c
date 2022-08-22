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
	int file;

	if (filename == NULL)
		return 0;
	file = open(filename, O_RDWR);
	if (file == -1)
		return 0;
}
