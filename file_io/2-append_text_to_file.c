#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file- function to read and print text file to stdout
 * @filename: ptr to the file to read and print
 * @text_content: text content of file
 * Return: 0 if failed else number of bytes printed
 */
int append_text_to_file(const char *filename, char *text_content)
{
int i = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, i);

	return (1);

}
