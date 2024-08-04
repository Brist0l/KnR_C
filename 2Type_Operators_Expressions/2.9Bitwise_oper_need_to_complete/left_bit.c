#include<stdio.h>

int main(){
	int a = 5;
	
	printf("%d\n",a);

	a <<= 1;

	printf("%d\n",a);

	a <<= 2;

	printf("%d\n",a);

	a >>= 3;
	
	printf("%d\n",a);

	a >>= 1;

	printf("%d\n",a);

}

// << -> bit shift left basically doubles the number ( when it is shifted by 1), when it is shifted by a value 
// greater than 1 it will double that number that many times by which the number has been shifted. *2^n
//
// >> -> bit shift right basically halves the number ( when it is shifted by 1), when it is shifted by a value
// greater than 1 it will halve that number that many times by which the number has been shifted. /2^n
