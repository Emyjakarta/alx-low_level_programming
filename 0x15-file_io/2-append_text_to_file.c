#include "main.h"
/**
 * append_text_to_file-a function that appends
 * text at the end of a file
 * @filename: is the name of the file and
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not
 * exist or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int _file_descriptor, _text_length;
	ssize_t _write_bytes;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	_file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (_file_descriptor == -1)
		return (-1);
	_text_length = 0;
	while (text_content[_text_length] != '\0')
		_text_length++;
	_write_bytes = write(_file_descriptor, text_content, _text_length);
	close(_file_descriptor);
	if (_write_bytes < 0 || (size_t)_write_bytes != (size_t)_text_length)
	{
		return (-1);
	}
	return (1);
}
