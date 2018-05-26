#include "../include/util.h"

void memory_copy(char *source, char *dest, int nbytes) {
    int i;
    for (i = 0; i < nbytes; i++) {
        *(dest + i) = *(source + i);             //    dest[i] = source[i]
    }
}

void memory_set(uint8 *dest, uint8 val, uint32 len) {
    uint8 *temp = (uint8 *)dest;
    for ( ; len != 0; len--) *temp++ = val;
}

/**
 * K&R implementation
 */
string int_to_ascii(int n, char str[]) {          
    int i, sign;
    if ((sign = n) < 0) n = -n;
    i = 0;
    do {
        str[i++] = n % 10 + '0';         
    } while ((n /= 10) > 0);

    if (sign < 0) str[i++] = '-';
    str[i] = '\0';

    /* TODO: implement "reverse" */
    return str;
}
string int_to_string(int n)
{
	string ch = malloc(50);
	int_to_ascii(n,ch);
	int len = strlength(ch);
	int i = 0;
	int j = len - 1;
	while(i<(len/2 + len%2))
	{
		char tmp = ch[i];
		ch[i] = ch[j];
		ch[j] = tmp;
		i++;
		j--;
	}
	return ch;
}

int str_to_int(string ch)
{
	int n = 0;
	int p = 1;
	int strlen = strlength(ch);
	int i;
	for (i = strlen-1;i>=0;i--)
	{
		n += ((int)(ch[i] - '0')) * p;
		p *= 10;
	}
	return n;
}
void* malloc(int nbytes)
{
	char variable[nbytes];
	return &variable;
}
int powl(int n,int i)
{
int t=1;
for(i;i>=1;i--)
{
t=n*t;
}
return t;
}
string float_to_string(float n)
{
string ch = malloc(50);
string ch2 = malloc(50);
int i;int l;int k;
int ipart = (int)n;
float fpart = n - (float)ipart;
ch=int_to_string(ipart);
i=strlength(ch);
ch[i]='.';
fpart = fpart * powl(10,3);
ch2=int_to_string((int)fpart);
l=strlength(ch2);
for(k=0;k<l;k++)
{
ch[i+1]=ch2[k];
i++;
}
return ch;
}
