#pragma once

typedef char* String;

#define STRING_INIT NULL

void String_Destroy(String* s);
int String_Set(String* s, const char* psz);