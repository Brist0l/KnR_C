#include<stdio.h>
#include<stdlib.h> // for atof()
#include<ctype.h> // for isdigit()

#define MAXOP 100 // max number of operators
#define NUMBER 0 // signals that a number has been found
#define MAXVAL 100 // max depth of val stack
#define BUFSIZE 100 // max lenght  of the buffer

int getop(char []);
void push(double);
double pop();
int getch();
void ungetch(int);

int sp = 0; // next free stack position
double val[MAXVAL]; // value stack of an array of doubles
char buf[BUFSIZE]; // buffer for ungetch
int bufp = 0; // next free position in buffer

int main(){
	int type;
	double op2;
	char s[MAXOP];

	while((type = getop(s)) != EOF){
		switch(type){
		case NUMBER:
			push(atof(s)); // atof converts a string into double
			break;
		case '+':
			push(pop() + pop());
			break;
		case '-':
			op2 = pop();
			push(pop() - op2);
			break;
		case '*':
			push(pop() * pop());
			break;
		case '/':	// divide and subrtract aren't commutative thats why the order must remain intact
			op2 = pop();
			if(op2 != 0.0)
				push(pop() / op2);
			else
				printf("error: zero divisor\n");
			break;
		case '\n':
			printf("\t%.8g\n",pop());
			break;
		default:
			printf("error: unknown command %s\n",s);
			break;
		}
	}
	return 0;
}

// push f onto value stack
void push(double f){
	if(sp < MAXVAL) // checks if the index is whithin the size of the stack	
		val[sp++] =f;
	else
		printf("Stack is full , can't push %g\n",f);
}

double pop(){
	if(sp>0)
		return val[--sp];
	else{
		printf("Error: stack empty\n");
		return 0.0;
	}

}

// get next char or numeric operand
int getop(char s[]){
	int i,c;

	while((s[0] = c = getch()) == ' ' || c == '\t');// It keeps on inputing until
							// there is not a space or a tab
	s[1] = '\0';
	if (!isdigit(c) && c != '.') // Returns opperator
		return c;

	i = 0;
	if(isdigit(c))
		while(isdigit(s[++i] = c = getch())); // input more nums and put it in a string. It is useful
						     // in the cases when a number is greater than 9
	if(c == '.') // it has a seperate if block and not combined with an "or" in the upper block cuz
		     // first you input the whole part and then the decimal part. 
		while(isdigit(s[++i] = c = getch()));
	s[i] = '\0';
	if(c != EOF)
		ungetch(c);
	return NUMBER;
		
}

int getch(){
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c){
	if(bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}
