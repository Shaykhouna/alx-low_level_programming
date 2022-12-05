#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: name of file
 * @text_content: text to append to the file
 *
 * Return: 1 on success and -1 on failure
 */
 int append_text_to_file(const char *filename, char *text_content)
{
	int ofile, wfile, leng;

	if (filenqme == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			len++;
	}
	ofile = open(filename, O_WRONLY | O_APPEND);
	wfile = write(ofile, text_content, leng);
	if (ofile == -1 || wfile == -1)
		return (-1);
	close(ofile);
	return(1);
}
