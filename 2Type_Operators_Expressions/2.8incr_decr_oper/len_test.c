#include<stdio.h>

int main(){
	char s[] = "hello";
	int i = 0;

	while(s[i++] = '\0'); //doesn't keep on incrementing the val of i

	printf("%d\n",i);
}
