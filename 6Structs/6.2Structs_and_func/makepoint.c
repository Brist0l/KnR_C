#include<stdio.h>

struct point{
		int x;
		int y;
	};

struct point makepoint(int x,int y){//will take in two ints and return a point struct
	struct point temp;

	temp.x = x;
	temp.y = y;
	
	return temp;
}

struct point addpoint(struct point p1,struct point p2){
	p1.x += p2.x;
	p1.y += p2.y;

	return p1;
}

int main(){
	typedef struct point point;	

	point temp;
	point sum;
	point *pp; // if a large sturct needs to be passed to a function then it is more 
			  // efficient to pass a pointer.

	temp = makepoint(1,2);
	printf("%d\t%d\n",temp.x,temp.y);
	
	sum = addpoint(temp,temp);
	printf("%d\t%d\n",sum.x,sum.y);

	pp = &sum;
	printf("sum is:%d\t%d\n",(*pp).x,(*pp).y);
	printf("sum is:%d\t%d\n",pp->x,pp->y); // its the same as above . if there are more members then
					       // it can be written as pp->pt1.x 
}
