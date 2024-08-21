#include<stdio.h>

// same as the other one but a bit more precise
int main(){
	float cel,far;
	int lower,upper,step;

	lower = 0;
	upper = 300;
	step = 20;

	far = lower;// the int is converted to float
	
	printf("    Heading    \n");
	while(far <= upper){
		cel = (5.0/9.0)*(far - 32.0);//using 5.0 and 9.0 would give me precise vals in floats
		printf("%.0f\t%.1f\n",far,cel);
		far += step;
	}
}
