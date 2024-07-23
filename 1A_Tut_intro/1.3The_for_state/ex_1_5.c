#include<stdio.h>

int main(){
	float far;
	
	// for loop is only executed if the 2nd value is true
	for(far = 300;far >= 0;far -= 20)
		printf("%.0f\t%.1f\n",far,(5.0/9.0)*(far-32.0));
}
