#include<stdio.h>

int main(){
	long c;
	
	c = 0;
	while(getchar()!=EOF)
		++c;
	
	printf("%ld\n",c);
}
