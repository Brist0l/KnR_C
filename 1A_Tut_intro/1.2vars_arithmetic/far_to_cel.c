#include<stdio.h>

int main(){
	//converts farhenheit to celcius using the formula C = 5/9(F-32) for farh= 0,20,.....300 
	
	int farh,cel;
	int lower,upper,step;

	lower = 0; //sets the lower limit for the farh
	upper = 300;
	step = 20;

	farh = lower;

	printf("%d\n",9/10); // int division trunacates ,i.e. the decimals are removed
	printf("%d\n",10/9);

	while(farh <= upper){
		cel = 5*(farh - 32)/9;
		printf("%d\t%d\n",farh,cel);
		farh += step;
	}
}
