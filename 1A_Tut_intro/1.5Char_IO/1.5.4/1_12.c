#include<stdio.h>

int main(){
	int c;
	
	c = getchar();
	while(c!=' '||c!='\n'|| c != '\t'){
		putchar(c);
		c = getchar();
	}
}
