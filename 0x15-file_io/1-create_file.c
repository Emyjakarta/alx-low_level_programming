#include "main.h"
/**
 * create_file-a function that creates a file
 * @filename: is the name of the file to create and
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int _file_descriptor, _write_bytes;

	if (filename == NULL)
	{
		return (-1);
	}
	_file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (_file_descriptor == -1)
		return (-1);
	if (text_content != NULL)
	{
		_write_bytes = write(_file_descriptor, text_content, strlen(text_content));
		if (_write_bytes == -1)
		{
			close(_file_descriptor);
			return (-1);
		}
	}
	close(_file_descriptor);
	return (1);
}
