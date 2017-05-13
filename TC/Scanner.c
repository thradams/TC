#include "Scanner.h"


void Scanner_Destroy(Scanner* p)
{
	Stream_Destroy(&p->Stream);
}
