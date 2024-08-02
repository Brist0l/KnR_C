#include<stdio.h>

void Strcat(char s[],char t[]);

int main(){
	char s1[] = "ab";
	char s2[] = "cd";

	Strcat(s1,s2);

	printf("%s\n",s1);
}

void Strcat(char s[],char t[]){
	int i,j;
	
	i =j= 0;
	while(s[i] != '\0')
		i++; // calculates the len of s
	while((s[i++] = t[j++]) != '\0');	
}
