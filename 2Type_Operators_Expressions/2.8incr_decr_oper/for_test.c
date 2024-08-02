#include<stdio.h>

int main(){
	for(int i = 0; i < 10 && printf("inside first loop:%d\t",i);++i)
		printf("first loop:%d\n",i);
	for(int j = 0; j < 10 && printf("inside second loop:%d\t",j);j++)
		printf("second loop:%d\n",j);
}

// ++i or j++ doesn't affect the loop. both of there output is exactly the same
