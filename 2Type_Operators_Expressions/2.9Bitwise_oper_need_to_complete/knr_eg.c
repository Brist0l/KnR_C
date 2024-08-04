#include<stdio.h>

int main(){
	int n = 1;

	n = n & 0177;

	putchar(n);
	printf("%d\n",n);
}
