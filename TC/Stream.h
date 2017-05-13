#pragma once
#include "StringX.h"


typedef struct
{
	String Name;
	String Text;
	int CurrentLine;
	int CurrentCol;
} Stream;

#define STREAM_INIT {STRING_INIT}

void Stream_Destroy(Stream* p);
int Stream_OpenFile(Stream* p, const char* fileName);
int Stream_SetText(Stream* p, const char* text);
int Stream_Next(Stream* s);
void Stream_PutBack(Stream* s, int ch);