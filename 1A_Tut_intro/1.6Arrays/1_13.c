#include<stdio.h>

#define NUM_WORDS 10

int main(){
	int i,x,wc=0;
	int len[NUM_WORDS];

	for(i=0;i<NUM_WORDS;++i)
		len[i] = 0;
	
	for(i = 0; i< NUM_WORDS;i++){
		while(getchar() != '\n')
			wc++;
		len[i] = wc;
	}	

	for(i=0;i<NUM_WORDS;++i){
		for(x=0;x<len[i];x++)
			printf("-");
		putchar('\n');
	}	
	

}
