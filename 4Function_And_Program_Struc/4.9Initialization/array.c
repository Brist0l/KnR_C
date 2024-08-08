#include<stdio.h>

int main(){
	int nums[6] = {1,2,3,4,5}; //when the lenght of the array isn't specified, the lenght is automatically
				  //set to the number of elements in the array. If non-initialized spaces are
				  //accessed then garbage values are returned.
				  //
				  //If values initialized are more than the allocated number then a warning is
				  //popped
	char str[] = "hello"; // this is equivalent to {'h','e','l','l','o','\0'}
	int i;

	for(i = 0;i<10;i++)
		printf("%d\n",nums[i]);
}
