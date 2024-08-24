#include<stdio.h>

int lower(int c);

int main(){
	int c = 'A';
	printf("%c\n",lower(c));
}

int lower(int c){
	if(c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;

}
