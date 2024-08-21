#include<stdio.h>

//worth revising

#define IN 1 // Inside the word
#define OUT 0 // Outside the word

int main(){
	int c,nl,nw,nc,state;
	
	nl = nw = nc = 0;
	state = OUT;

	while((c=getchar()) != EOF){
		++nc;
		if(c=='\n')
			++nl;
		
		if(c=='\n'|| c == ' ' || c == '\t'){
			state = OUT;
			++nw;
		}
		else if(state == OUT)
			state = IN;

	}
	printf("Chars:%d\nNew Lines:%d\nWords:%d\n",nc,nl,nw);
}
