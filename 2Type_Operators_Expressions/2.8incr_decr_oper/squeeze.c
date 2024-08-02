#include<stdio.h>

void squeeze(char s[]); // removes 'c' from the strings

int main(){
	char string[] = "abcd";

	printf("%s\n",string);

	squeeze(string);

	printf("%s\n",string);
}

void squeeze(char s[]){
	int i,j;

	for(i =j= 0;s[i] != '\0';++i)
		if(s[i] != 'c')
			s[j++] = s[i]; // first use j and then increment it's value
				       // its the same as:
				       //
				       // s[j] = s[i];
				       // j++;
	s[j] = '\0';
	
}
