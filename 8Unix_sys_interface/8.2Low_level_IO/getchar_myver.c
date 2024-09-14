#include<unistd.h>
#include<stdio.h>

// WONT WORK AS EXPECTED

// I need a pointer to hold the array's address and do pointer arithematic on it.
// this will just return the first element of the array n times.
int Getchar();

int main(){
	char x;
	while((x = Getchar()) != EOF)
		printf("%c",x);
}

int Getchar(){
	static char buf[BUFSIZ];
	static int n = 0;

	if(n == 0){ // buffer is empty
		n = read(0,buf,BUFSIZ);	
	}

	return (--n >= 0) ? (unsigned char) *buf : EOF;
}
