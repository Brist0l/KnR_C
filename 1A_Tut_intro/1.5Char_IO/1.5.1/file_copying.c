#include<stdio.h>

int main(){
	// what appears to be "characters" on the keyboards are stored as bit streams internally
	// so to store such "characters" any integer data type can be used but char is prefered.
	int c; // over here int is used so that EOF works. getchar works in such a manner that when the input
	       // ends it returns a value which can't be confused with any other value i.e. EOF. So to store
	       // the input + EOF(if Ctrl+D is pressed) a datatype larger than char would be required as a 
	       // char would only be able to hold one chararacter and not the EOF which would follow ahead.

	c = getchar();

	while(c != EOF){//EOF is from the stdio.h
		putchar(c);
		c = getchar();
	}
	
	return 0;
}
