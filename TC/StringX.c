#include "StringX.h"
#include <stdlib.h>
#include <string.h>


void String_Destroy(String* s)
{
	if (*s != NULL)
	{ 
		free(*s);
	}
}

//Retorna -1 no erro 
//Retorna o numero de caracteres de psz
int String_Set(String* s, const char* psz)
{
	int result = -1;
	if (psz == NULL)
	{
		free(*s);
		*s = NULL;
		result = 0;
	}
	else
	{
		result = strlen(psz);
		const char* p = malloc(result + 1);
		if (p)
		{
			free(*s);
			strcpy(p, psz);
			*s = p;
		}
		else
		{
			result = -1;
		}
	}
	return result;
}