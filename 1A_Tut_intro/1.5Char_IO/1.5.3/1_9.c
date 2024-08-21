#include<stdio.h>


// To re-revise

int main(){
	int c,blank_char = 0;
	
	while((c=getchar()) != EOF){
		if(c == ' '){
			if(!(blank_char > 0))
				putchar(' ');
			blank_char++;
		}
		else{
			blank_char = 0;
			putchar(c);
		}
	}
}
