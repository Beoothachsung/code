#include <stdio.h>
int main (){
	int a=200, b=100;
	char kitu;
	scanf ("%c", &kitu);
	switch (kitu){
		case '+':
			printf ("%d", a+b);
			break;
		case '-':
			printf ("%d", a-b);
			break;
		case '*':
			printf ("%d", a*b);
			break;
		case '/':
			printf ("%d", a/b);
			break;
		default:
			printf ("tuandudeptrai!");
	}
}
