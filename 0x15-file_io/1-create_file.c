#include "main.h"
#include <stdio.h>

/**
 * create_file - Function that creates a file
 * @filename: name of file to be created.
 * @text_content: content string written in the file.
 *
 * Return: 1 on success, -1 on failure (file can not be created, f
 * ile can not be written, write “fails”, etc…)
*/
int create_file(const char *filename, char *text_content)
{
	int g, w, value = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (value = 0; text_content[value];)
			value++;
	}

	g = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(g, text_content, value);

	if (g == -1 || w == -1)
		return (-1);

	close(g);

	return (1);
}
