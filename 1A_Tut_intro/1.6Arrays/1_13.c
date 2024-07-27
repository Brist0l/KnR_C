#include<stdio.h>

int main(){
	int c,i,x;
	int len[10];

	for(i=0;i<10;++i)
		len[i] = 0;

	while((c=getchar()) != '\n')
		++len[c - '0'];

	for(i=0;i<10;++i){
		if(len[i] != 0)
			for(x=0;x<len[i];x++)
				printf("-");
	}

}
