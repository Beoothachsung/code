#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main (){
	char a[100]="Duong tuan du dep trai vai ca biu";
	a[5] = '\0';//'0':null
	printf ("%s", a);
}//no se in ra duong:boi vi ban cho ki tu 5 la ki tu ket thuc xau, do ban gan no = '\0'.
