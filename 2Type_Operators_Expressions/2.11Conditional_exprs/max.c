#include<stdio.h>

int Max(int a,int b);

int main(){
	printf("%d",Max(4,3));
}

int Max(int a,int b){
	return (a>b) ? a : b; // First it checks the first expression i.e (a>b) 
			      //
			      // Now if it is non-zero(true) then it will return int a
			      // else it will return int b
			      //
			      // the format is fixed expression1 ? expression2 : expression3
}
