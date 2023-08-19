#include "./../main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

/**
 * cases to hadle: 
 * 1. this one is tricky -> (if we pass all the formats specifiers
 * 	and did not match any one.) because the the behavior of av_arg() is 
 * 	undifined if the there is know optional args.
 *
 * 2. if ran out of the chars in the format
 * 3. if the format is present but the arg is not there
 * 4. ...
 */

int main(void)
{
	_printf("%s\n", "yassine\nelmouriki\n");
	_printf("%d\n", 1337);
	_printf("%i\n", 1337);

	return (0);
}

