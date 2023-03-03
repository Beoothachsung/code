#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	char a[10];
	fgets(a, 10, stdin);
	printf ("%s\n", a);
}
