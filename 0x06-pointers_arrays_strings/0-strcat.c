#include "main.h"
/**

 ��*_strcat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character tha will also be changed
 *Return; dest
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = à0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';

return (dest);
}
