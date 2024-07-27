#include<stdio.h>

int main(){
	int c,i,nspace,nother;
	int ndigit[10];

	nspace = nother = 0;

	for(i=0;i<10;++i)
		ndigit[i] = 0;

	while((c=getchar()) != EOF){
		if(c>= '0' && c <= '9') // as c is a char you would need to put ints in '' too
			++ndigit[c-'0']; // to convert the char into int
		else if(c == ' ' || c == '\t' || c == '\n')
			++nspace;
		else
			++nother;
	}

	printf("Digits:");
	for(i=0;i < 10;++i)
		printf(" %d ",ndigit[i]);
	printf(" Spaces:%d Others:%d",nspace,nother);
	
}
