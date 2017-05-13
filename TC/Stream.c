#include "Stream.h"
#include <stdio.h>

void Stream_Destroy(Stream* p)
{
	String_Destroy(&p->Name);
	String_Destroy(&p->Text);	
}

int Stream_OpenFile(Stream* p, const char* fileName)
{
	int result = -1;
	size_t lSize = 0;
	FILE*  fp = (FILE*)fopen(fileName, "rb");

	if (fp)
	{
		fseek(fp, 0L, SEEK_END);
		lSize = ftell(fp);
		rewind(fp);
		char*  buffer = (char*)malloc(lSize + 1);

		if (buffer)
		{
			/*size_t fr =*/ fread(buffer, 1, lSize, fp);

			if (feof(fp))
			{
				//ok leu tudo
			}

			if (!ferror(fp))
			{
				buffer[lSize] = '\0';
				
				String_Destroy(&p->Text);
				p->Text = buffer;
				
				result = 1; //ok				
			}

			free(buffer);
		}

		fclose(fp);
	}
	return result;
}

int Stream_SetText(Stream* p, const char* text)
{
	String_Set(p->Text, text);
}

int Stream_Next(Stream* s)
{

}
void Stream_PutBack(Stream* s, int ch)
{

}
