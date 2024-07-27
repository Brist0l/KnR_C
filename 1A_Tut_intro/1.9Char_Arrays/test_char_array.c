#include<stdio.h>

int main(){
	char empty[100];

	printf("%s\n",empty); // an empty char array prints nothing
	
	int i;

	for(i=0;i<5;++i)
		printf("Hello\n");

	printf("Now the value of i is:%d\n",i);
}
