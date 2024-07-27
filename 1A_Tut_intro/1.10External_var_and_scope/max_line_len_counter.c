#include<stdio.h>
#define MAXLEN 1000

int getLine();
void copy();

char line[MAXLEN];
char longest[MAXLEN];
int max;

// The Use of 'extern' is not required in this code, if there were multiple files then i would be needing it
// or if i had defined the variables below a function

int main(){
	int len;
	extern int max;
	
	max = 0;
	while((len = getLine()) >0) // when EOF is there in the start 0 is sent
		if(len > max){
			max = len;
			copy();
		}
	if(max>0)
		printf("%s",longest);
	return 0;
	
}

int getLine(){
	int i,c;
	extern char line[];

	for(i = 0; i < MAXLEN -1 && (c = getchar()) != EOF && c != '\n';++i)
		line[i] = c;
	
	if(c =='\n'){
		line[i] = '\n';
		++i;
	}
	line[i] = '\0';
	return i;
}

void copy(){
	int i;
	extern int max;
	extern char longest[],line[];

	for(i=0;i <= max;++i)
		longest[i] = line[i];
	

}
