#ifndef UTIL_H
#define UTIL_H
#include <stddef.h>
#include "types.h"

void memory_copy(char *source, char *dest, int nbytes);
void memory_set(uint8 *dest, uint8 val, uint32 len);
string int_to_ascii(int n, char str[]);  
int str_to_int(string ch);
void* malloc(size_t sz); 
int powl(int n,int i);
string int_to_string(int n);
string float_to_string(float n);     

#endif
