#include<stdio.h>

int main(){
	int x,n1,n2;

	x = 5;

	n1 = x++;
	n2 = ++x;

	printf("n1 is %d\nn2 is %d\nx is %d",n1,n2,x);
}

// ++x means that the value is first incremented and then used
// x++ means that the value is first used and then incremented
