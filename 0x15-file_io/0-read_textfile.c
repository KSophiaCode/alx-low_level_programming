#include "main.h"
/**
 * read_textfile - Read a textfile, print the
 * content to POSIX STDOUT
 * @filename: name of file to read from
 * @letters: Number of character to print to STDOUT
 * Return: The character printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fild = 0, chk = 0;
	char *buffer;

	if (!filename || !letters)
		return (0);
	fild = open(filename, O_RDONLY);

	if (fild < 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	chk = read(fild, buffer, letters);
	chk = write(STDOUT_FILENO, buffer, chk);
	if (chk < 0)
		return (0);

	close(fild);
	free(buffer);
	return (chk);
}
