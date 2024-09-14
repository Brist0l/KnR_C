#include<unistd.h>
#include<stdio.h>

int Getchar();

int main(){
	char x;

	while((x = Getchar()) != EOF)
		printf("%c",x);	
}

int Getchar(){
	char c;

	return (read(0,&c,1) == 1) ? (unsigned char) c: EOF; // char* is also a mem address only but for 
							     // larger holding
}
