#include<stdio.h>
#define MAXLINE 1000 // max amount of input a line can have

//worth revising

int getLine(char line[],int max);
int strindex(char source[],char searchfor[]);

char pattern[] = "ould";  // pattern to search for

int main(){
	char line[MAXLINE];
	int found = 0; // patterns found 
	
	int len;

	while(getLine(line,MAXLINE) > 0){
		if((len = strindex(line,pattern)) >= 0){
			printf("nice :%s\n",line);
			found++;
		}
	}
	return found;
}

// fills the input into "line" and returns it's lenght
int getLine(char line[],int max){
	int c,i;

	for(i = 0;(c = getchar()) != EOF && c!='\n' && i < max ;i++)
		line[i] = c; // when inputted 'helo' it outputs 4 i.e. it is looped by the nums 0,1,2,3
	if(c == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return i;
	
}

int strindex(char source[],char searchfor[]){
	int i,j,k;

	for(i = 0; source[i] != '\0'; i++){
		for(j=i,k=0; searchfor[k] != '\0' && source[j] == searchfor[k];j++,k++);
		if(k>0 && searchfor[k] == '\0')
			return i;
	}
	return -1;
}
