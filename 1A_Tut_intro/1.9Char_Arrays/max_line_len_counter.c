#include<stdio.h>
#define MAXLEN 1000 // max line length

int getLine(char line[],int len);
void copy(char from[],char to[]);

int main(){
	char s[MAXLEN],maxline[MAXLEN];
	int lenght,max;
	
	max = 0;

	printf("The value of s now is:%s\nThe lenght of it is:%d\n",s,lenght);
	while((lenght = getLine(s,MAXLEN)) > 5){
		if(lenght>max){
			max = lenght;
			copy(s,maxline);
		}
	}
	
	if(max>0)
		printf("%s",maxline);

	return 0;
}

int getLine(char line[],int len){
	int i,c;
	
	printf("Start Typing:");
	for(i = 0;i < len && (c = getchar()) != EOF && c != '\n';++i)
		line[i] = c; // The value of line variable is now stored in the variable which would be passed
			     // in it's place
	if(c = '\n'){ // the loop would have exited as the value of c is '\n', so to add it now we use this
		line[i] = '\n';
		++i;
	}
	printf("The line is:%s\nand the last char stored in c is:%d\nWith i's value as:%d\n",line,c,i);
	line[i]='\0';
	return i;
}

void copy(char from[],char to[]){
	int i;
	
	i = 0;

	while((to[i] = from[i]) != '\0')
		++i;
}
