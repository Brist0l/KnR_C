#include<stdio.h>

int main(){
	char s[] = "hello";
	int i = 0;

	while(s[i++] != '\0'); //it's accurate if '\0' is counted 

	printf("%d\n",i);
}
