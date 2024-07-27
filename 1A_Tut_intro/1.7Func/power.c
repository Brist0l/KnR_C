#include<stdio.h>

int pow(int base,int power);

int main(){
	int i;
	
	for(i=1;i<5;++i){
		printf("%d %d\n",pow(2,i),pow(1,i));
	}
}

int pow(int base,int power){
	int i,num;
	
	num = 1;
	for(i = 1;i<= power;++i){
		num = num*base;
	}
	return num;
}
