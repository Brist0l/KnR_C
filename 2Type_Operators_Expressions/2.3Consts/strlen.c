#include<stdio.h>
#define MAXLEN 1000

int strLen(char str[MAXLEN]);
int getLine(char str[MAXLEN]);

int main(){
	char str[MAXLEN] = "";
	
	while(getLine(str) > 0)
		printf("The str is:%s\nLen is:%d\n",str,strLen(str));
}

int strLen(char str[MAXLEN]){
	int i;
	//str = "Hello"
	i = 0;

	while(str[i] != '\0')
		i++;

	return i;
}

int getLine(char str[MAXLEN]){
	int i,c;
	
	for(i=0;i < MAXLEN && (c = getchar()) != EOF && c != '\n';++i)
		str[i] = c;
	str[i] = '\0';

	return i;
}

// 'x' just means an int which has an ascii value of the letter x.
// "x" means the letter x with \0
// const keyword can be used to indicate that a value won't change
