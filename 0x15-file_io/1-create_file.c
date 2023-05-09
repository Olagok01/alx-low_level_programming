#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: the pointer to the name of the file to create
 * @text_content: the pointer to a string to write to the file
 * Return: If the function fails - -1. Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int open_file, write_file, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0; text_content[length]; length)
		{
		}
	}

	open_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_file = write(open_file, text_content, length);

	if (open_file == -1 || write_file == -1)
	{
		return (-1);
	}

	close(open_file);

	return (1);
}
