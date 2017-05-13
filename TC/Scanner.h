#pragma once
#include "Stream.h"

typedef struct
{
	Stream Stream;
	Scanner *pPrevious;
} Scanner;

#define SCANNER_INIT { STREAM_INIT , NULL }
void Scanner_Destroy(Scanner* p);

//void PrintAllTokens(Scanner* p);

typedef struct
{
	Scanner* Top;
} ScannerStack;

#define SCANNERSTACK_INIT { NULL }
