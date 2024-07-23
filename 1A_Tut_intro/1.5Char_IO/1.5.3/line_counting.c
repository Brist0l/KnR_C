#include<stdio.h>

int main(){
	int c,nl;

	nl = 0;

	while((c = getchar()) != EOF){
		if(c == '\n') // a char between single qoutes is equal to it's int value called charecter const
			++nl;
	}

	printf("%d\n",nl);
}
