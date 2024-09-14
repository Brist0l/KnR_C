#include<unistd.h>
#include<stdio.h>

int Getchar();

int main(){
	char x;
	while((x = Getchar()) != EOF)
		printf("%c",x);	
}

// reads a chunk of data and returns one char at a time
int Getchar(){
	static char buf[BUFSIZ];
	static char *bufp = buf; // store the value of the array into another variable
	static int n = 0;

	if(n == 0){ // buffer is empty
		//printf("size of buf is %d\n",sizeof(buf)); // prints out the lenght of the array 
		n = read(0,buf,sizeof(buf));	
		bufp = buf;
	}
	return (--n >= 0) ? (unsigned char) *bufp++: EOF; // return bufp and then set it's value to the
							  // next element
}
