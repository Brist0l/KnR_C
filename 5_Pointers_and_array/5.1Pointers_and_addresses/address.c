#include<stdio.h>

int main(){
	char c;
	char *p;
	int x = 1,y = 2,z[2];
	int *ip;

	p = &c;//p holds the memory address of c , so p is said to "point to" c.
	printf("The memory address of c is:%d\n",p);

	ip = &x; // ip now points to x
	y = *ip; // by derefrencing the pointer ip , i got it's value at that stored location. so now 
		 // y is 1
	*ip = 0; // x is now 0
	printf("address:%d\ty:%d\tx:%d\n",ip,y,x);	
}
