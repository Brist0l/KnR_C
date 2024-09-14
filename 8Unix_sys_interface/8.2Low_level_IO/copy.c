#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

// file descriptor is a non-negative num which is attached to a file,whenever i/o needs to be done this
// number is used.
//
// file descriptors 0,1 and 2 are standard input, standard output and standard error respectively.

int main(){
	char buf[BUFSIZ];
	int n;
	
	printf("%d\n",BUFSIZ); // "8192" is the output
			       
	// the read and write call return the number of bytes transfered.
	while((n = read(0,buf,BUFSIZ)) > 0)//read function may return less bytes than what it was 
					   //requested	
		write(1,buf,n); // if the return value isn't equal to the number requested then an error
				// has occured.

	return 0;
}
