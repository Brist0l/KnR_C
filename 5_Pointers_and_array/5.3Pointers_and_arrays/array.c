#include<stdio.h>

int main(){
	int a[10];// the diffrence between an array and a pointer is that the array isn't a variable so stuff
		  // like a = pa and a++ are illegal.
	int *pa;

	for(int i = 0;i < 10;i++)
		a[i] = i*(i+1);

	pa = a;//this is the same as writing "pa = &a[0];"
	printf("the address of the array is:%d\nwith it's value being:%d\n",pa,*pa);// the value of a[0] is *pa
										    // the value of a[1] is 
										    // *(pa + 1)
	printf("the value at 3rd pos is:%d\n",*(a+2));
}
