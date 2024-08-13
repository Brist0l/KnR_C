#include<stdio.h>

#define ALLOCSIZE 1000 //size of available space

static char allocbuf[ALLOCSIZE]; // static in the global variables means that it is only availble to use in
				 // this file. it it were named inside a function then during each invocation 
				 // it's value would have remained what it was in the previous run.
				 //
				 // this is the storage for alloc
static char *allocp = allocbuf; //This gives the next free position

char* alloc(int n){ // allocates n bytes and returns a pointer to the n chars
	if(ALLOCSIZE - (allocp - allocbuf) >= n){ // if there is still space inside the buffer
		allocp += n; // allocated n bytes
		return allocp - n;
	}
	else
		return 0; // not enough room in the buffer
}

void afree(char *p){ // frees the storage pointed to by p.its sets allocp to p if p is inside allocbuf
	if(p >= allocbuf && p < allocbuf + ALLOCSIZE)
		allocp = p;
}

int main(){
	char *p1;
	char *p2;

	p1 = alloc(10); //allocates 10 bytes of space to me
	p2 = alloc(20); //allocates 20 bytes of space to me
	printf("The starting address is:%d\nand the ending address is:%d\n",p1,p1+10);
	printf("The starting address is:%d\nand the ending address is:%d\n",p2,p2+20);

	p1 = "1234567891";//11 chars long
	p2 = "Goodbye";
	
	printf("%s\t%s\t%c\n",p1,p2,allocbuf[3]);
}
