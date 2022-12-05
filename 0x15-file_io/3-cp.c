#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocate 1024 bytes for a buffer
 * @file: The name of the file buffer is storing chars for
 *
 * Return: A pointer to the newly-allocated buffer
 */
char *create_buffer(char *file)
{
	char *buf;

	buffer = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILEND, "Error: Can't to %s\n", file);
		exit (99);
	}
	return (buf);
}

/**
 * close_file - closes opened file
 * @fend: the file to close
 *
 * Return: nothing, void function
 */
void close_file(int fend)
{
	int closed;
	closed = close(fend);
	if (closed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fend %d\n", fend);
		exit(100);
	}
}

/**
 * main - Copies content from one file to another
 * @argc: number of arguments supplied
 * @argv: Array of pointers to the supplied args
 *
 * Return: 0 when success (97 to 100 for failure)
 */
int main(int argc, char *argv[])
{
	int source, dest, rfile, wfile;
	char *buf;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}
	buf = create_buffer(argv[2]);
	source =  open(argv[1], O_RDONLY);
	rfile = read(source, buf, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (source == -1 || wfile == -1)
		{
			dprintf(STDERR_FILENO, "Error: CAn't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		wfile = write(source, buf, rfile);
		if (dest == -1 || wfile == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rfile = read(source, buf, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	} while (rfile > 0);
	free(buf);
	close_file(source);
	close_file(dest);
	return (0);
}
