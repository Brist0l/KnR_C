#include<stdio.h>
#include<stdlib.h>

int Atoi(char s[]); //convert the string(which has ints) of chars into int

int main(){
	char mystr[] = "1234";

	int atlol = Atoi(mystr);

	printf("My str which was initially %s, is now an int with the value of %d\n",mystr,atlol);
}

int Atoi(char s[]){
	int i,n;
	
	n = 0;
	for(i = 0;s[i] >= '0' && s[i] <= '9';++i){
		n = 10*n +(s[i] - '0');
		printf("val of n is:%d\n",n);
	}
	return n;

}
