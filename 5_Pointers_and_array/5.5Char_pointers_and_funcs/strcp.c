#include<stdio.h>

void strcpa(char *s,char *t){ // array subscript version
	int i;

	for(i = 0;t[i] != '\0';i++)
		s[i] = t[i];

}

void strcpp(char *s,char *t){ // pointer version
	while(printf("s=%c\tt=%c\n",*s,*t) && (*s = *t)){
		s++;
		t++;
	}
}

void strcpp2(char *s,char *t){ // pointer version
	while(printf("s=%c\tt=%c\n",*s,*t) && (*s++ = *t++));
}

int main(){
	char *s = "string";
	char *t;
	
	printf("*s=%c\n",*s); //works like an array 
	printf("s's address=%d\n",s);

	printf("%s\n",s);
	printf("%s\n",t);
	strcpp2(t,s);
	printf("%s\n",t);
}
