#include<stdio.h>

int main(){
	float far;

	for(far = 0;far <= 300; far += 20)
		printf("%.1f\t%.1f\n",far,(5.0/9.0)*(far-32.0));
}
