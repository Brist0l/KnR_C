#include<stdarg.h>

void minprintf(char *fmt,...){
	va_list ap; //ap = argument pointer , va_list is variable argument list. It will point to each
		    //unnamed arg in turn
	char *p;
	int ival;

	va_start(ap,fmt); // initialises ap to point to the first unnamed arg.
	for(p = fmt;*p;p++){
		if (*p != '%'){
			putchar(*p);
			continue;//will quit this if and go back to the for loop
		}
		switch(*++p){
			case 'd':
				ival = va_arg(ap,int);
				printf("%d",ival);
				break;
		}
	}
}

int main(){
	return 0;
}
