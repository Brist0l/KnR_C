#include<stdio.h>

void Strcat(char s[],char t[]); // concatenates the string 's' with string 't', given that s is long enough

int main(){
	char s1[] = "ab";
	char s2[] = "cd";

	printf("%s\n",s1);
	printf("%s\n",s2);

	Strcat(s1,s2);

	printf("%s\n",s1);
}

void Strcat(char s[],char t[]){
	int i,j;
	char new[10];
	
	j = 0;
	for(i = 0; s[i] != '\0'; i++)
		new[j++] = s[i];
	for(i = 0;t[i] != '\0'; i++)
		new[j++] = t[i];
	new[j] = '\0';

}
