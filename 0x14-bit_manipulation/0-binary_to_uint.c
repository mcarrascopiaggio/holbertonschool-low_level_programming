#include "main.h"

/**
 *binary_to_uint - convert a binary_to_int
 *@b: is pointing to a string of 0 and 1 chars
 *Return: the converted number or NULL
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int ndec = 0;/** var to save de uint*/

if (b == NULL)/**special case*/
return (0);

for (; *b != 0; b++)/**traverse b content*/
{
	if (*b != '0' && *b != '1')/**special case - NOT BIN CONTENT*/
	{
		return (0);
	}
	else
	{
		ndec = ndec << 1; /**div ndec into 2 one time*/
		if (*b == '1')/** if the content is 1 add 1 to ndec*/
		{
			ndec = ndec + 1;
		}
	}
}
return (ndec);
}
