#include<stdio.h>

int main(){
	int c,i;
	
	i = 0; 
	while((c=getchar()) != EOF){
		i++;
	}
	printf("no. of letters = %d\n",i-1);
}
