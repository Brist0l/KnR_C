#include<stdio.h>

void squeeze(char s1[],char s2[]);//deletes s2 from s1

int main(){
	int i;
	char s1[10] = "helo";
	char s2[10] = "lo";
	squeeze(s1,s2);
	printf("%s\n%s\n",s1,s2);
	
}

void squeeze(char s1[],char s2[]){
	int i,j,k;
	for(i = k = 0; s1[i] != '\0' ; i++){
		for(j = 0;s2[j] != '\0' && s2[j] != s2[i]; j++);
		
		if(s2[j] == '\0')
			s1[k++] = s1[i];
	}

	s1[k] = '\0';
}
