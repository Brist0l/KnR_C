#include<stdio.h>

int main(){
	const double pi = 22.0/7.0;

	printf("The value of pi is:%f\n",pi);

//	pi = 10;// gives error as its a const

	printf("Now it is:%f\n",pi);
}
