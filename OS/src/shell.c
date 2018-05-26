#include "../include/shell.h"
void launch_shell(int n)
{
	string ch = (string)malloc(200); // util.h
	int counter = 0;
	do
	{
			print("MyCalC (");
			print(int_to_string(n));
			print(")> ");
		    ch = readStr(); //memory_copy(readStr(), ch,100);
		    if(strEql(ch,"cmd"))
		    {
		            print("\nYou are allready in cmd. A new recursive shell is opened\n");
					launch_shell(n+1);
		    }
		    else if(strEql(ch,"clear"))
		    {
		            clearScreen();
		    }
		    else if(strEql(ch,"sum"))
		    {
		    	sum();
		    }
		    else if(strEql(ch,"exit"))
		    {
		    	print("\nGood Bye!\n");
		    }
		    else if(strEql(ch,"help"))
		    {
		    	help();
		    }
		    else if(strEql(ch,"multiply"))
		    {
		    	multiply();
		    }
		    else if(strEql(ch,"pow"))
		    {
			pow();
	            }
		    else if(strEql(ch,"sqrt"))
		    {
			sqrt();
		    }
		    else
		    {
		            print("\nBad command!\n");
		            print("MyCalC> ");
		    } 
	} while (!strEql(ch,"exit"));
}

void pow()
{
float_to_string(123.456);
//string_to_float("123.456");
int n,t,i;
print("\nnumber: ");
n=str_to_int(readStr());
t=1;
print("\npower: ");
i=str_to_int(readStr());
for(i;i>=1;i--)
{
t=t*n;
}
print("\nResult: ");
	print(int_to_string(t));
	print("\n");
}
void sum()
{
	print("\nHow many numbers: ");
	int n = str_to_int(readStr());
	int i =0;
	print("\n");
	int arr[n];
	fill_array(arr,n);
	int s = sum_array(arr,n);
	print("Result: ");
	print(int_to_string(s));
	print("\n");
}
void fill_array(int arr[],int n)
{
	int i = 0;
	for (i = 0;i<n;i++)
	{
		print("ARR[");
		print(int_to_string(i));
		print("]: ");
		arr[i] = str_to_int(readStr());
		print("\n");
	}
}
void print_array(int arr[],int n)
{
	int i = 0;
	for (i = 0;i<n;i++)
	{
		/*print("ARR[");
		print(int_to_string(i));
		print("]: ");*/
		print(int_to_string(arr[i]));
		print("   ");
	}
	print("\n");
}
int sum_array(int arr[],int n)
{
	int i = 0;
	int s = 0;
	for (i = 0;i<n;i++)
	{
		s += arr[i];
	}
	return s;
}
void multiply()
{
	print("\nNum 1: ");
	int num1 = str_to_int(readStr());
	print("\nNum 2: ");
	int num2 = str_to_int(readStr());
	print("\nResult: ");
	print(int_to_string(num1*num2)); // util.h
	print("\n");
}
void sqrt()
{
print("\nNumber : ");
int num= str_to_int(readStr());
int m,n;
n=1;
for(m=0;m<num;m=m+n)
 {
  if((m*m)>num)
  {
   m=m-n;        
   break;      
  }              
 }
print("\n");
print(int_to_string(m));
print("\n");
}
void help()
{
	print("\ncmd       : Launch a new recursive Shell");
	print("\nclear     : Clears the screen");
	print("\npow       : calculate power of a number");
	print("\nsqrt      : calculate square root of a number");
	print("\nsum       : Computes the sum of n numbers");
	print("\nexit      : Quits the current shell");
	print("\n\n");
}

