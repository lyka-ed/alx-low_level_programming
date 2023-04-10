#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: name of file.
 * @text_content: content string written in the file.
 *
 * Return: 1 on success and -1 on failure, 1 if the file exists and -1 if
 * the file does not exist or if you do not have the required
 * permissions to write the file
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int g;
	int value;
	int rwr;

	if (!filename)
		return (-1);

	g = open(filename, O_WRONLY | O_APPEND);

	if (g == -1)
		return (-1);

	if (text_content)
	{
		for (value = 0; text_content[value]; value++)
			;

		rwr = write(g, text_content, value);

		if (rwr == -1)
			return (-1);
	}
	close(g);

	return (1);
}
