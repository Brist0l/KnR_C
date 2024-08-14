#include<stdio.h>

int main(){
	int day,year;
	char month[10];

	scanf("%d %s %d",&day,month,&year);
	printf("%d/%s/%d",day,month,year);
}
