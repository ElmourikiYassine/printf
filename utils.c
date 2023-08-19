#include "main.h"

/**
 * _strlen - Computes the length of a string
 * @s: The input string
 *
 * Return: The length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _memcpy - Copies memory from source to destination
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source buffer
 * @num_bytes: Number of bytes to copy
 */
void _memcpy(void *dest, const void *src, size_t num_bytes)
{
	char *char_src = (char *)src;
	char *char_dest = (char *)dest;
	size_t i;

	for (i = 0; i < num_bytes; i++)
		char_dest[i] = char_src[i];
}


