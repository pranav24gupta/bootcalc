#include "../include/util.h"
#include "../include/screen.h"
#include <stddef.h>

/*struct node
{
int data;
struct node *next;
};*/
static unsigned char our_memory[1024 * 1024]; //reserve 1 MB for malloc
static size_t next_index = 0;
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
	string ch =(char *)malloc(50);
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

void *malloc(size_t sz)
{
    void *mem;

    if(sizeof our_memory - next_index < sz)
        return NULL;

    mem = &our_memory[next_index];
    next_index += sz;
    return mem;
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
int l1,i;int l;int k;
string ch =(char *)malloc(50);
string ch2 =(char *)malloc(50);
string ch3=(char *) malloc(100);
print("\n");
int ipart = (int)n;
float fpart =(n-ipart);
ch=int_to_string(ipart);
print("\n");
i=strlength(ch);
ch[i]='.';
l1=i+1;
print(ch);
fpart = fpart * 1000;
ch2=int_to_string((int)fpart);
print("\n");
print(ch2);
l=strlength(ch2);
for(i=0;i<l1+l;i++)
{
if(i<l1)
{
ch3[i]=ch[i];
}
else
{
ch3[i]=ch2[i-l1];
}
}
print("\n");
print(ch3);
return (ch3);
}
/*float string_to_float(string str)
{
float fi,frac;
int p,i,k,inte;
string ch =(char *)malloc(50);
string ch2 =(char *)malloc(50);
string ch3 =(char *)malloc(50);
int len;
len=strlength(str);
i=0;
k=0;
while(str[i]!='.')
{
ch[i++]=str[i++];
}
inte=str_to_int(ch);
print(int_to_string(inte));
i+=1;
for(;i<len;i++)
{
ch2[k++]=str[i++];
}
p=strlength(ch);
frac=str_to_int(ch2)*(1/powl(10,p));
fi=inte+frac;
//ch3=float_to_string(fi);
return(fi);
}
*/
