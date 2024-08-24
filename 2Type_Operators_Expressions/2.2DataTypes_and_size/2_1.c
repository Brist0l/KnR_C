#include<stdio.h>
#include<limits.h>

int main(){
	printf("The max val of char is:%d\n",CHAR_MAX);
	printf("The min val of char is:%d\n",CHAR_MIN);
	printf("The bits in a char is:%d\n",CHAR_BIT);//i.e. 1 byte(8 bits)
	printf("The max val of int is:%d\n",INT_MAX);
	printf("The min val of int is:%d\n",INT_MIN);
	printf("The max val of short is:%d\n",SHRT_MAX);
	printf("The min val of short is:%d\n",SHRT_MIN);
	printf("The unsigned val of short is:%d\n",USHRT_MAX);
	printf("The max val of long is:%ld\n",LONG_MAX);
	printf("The max val of unsigned long is:%lu\n",ULONG_MAX);

}

// Short -> 16 bit number (2 byte num)
// Int -> 16 bit or 32 bit number depending on processor and compiler
// Long -> 32 bit number
// unsigned vals are 0 or positive , so if we already know that the var would be postive then we can use this
// signed vals can be negative
//
// float , double and long double are used for decimal nuambers
