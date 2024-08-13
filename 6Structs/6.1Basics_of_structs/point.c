#include<stdio.h>

int main(){
	struct point{ // collection of one of more variables,may or may not be of the same type
		int x; // variable name in a sturct are called members
		int y;
	};

	struct point p;
	p.x = p.y = 2;
	printf("%d\t%d\n",p.x,p.y);

	struct rect{
		struct point p1;
		struct point p2;
	};

	struct rect screen;
	printf("%d\t%d\n%d\t%d",screen.p1.x,screen.p1.y,screen.p2.x,screen.p2.y);
}
