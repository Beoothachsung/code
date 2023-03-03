//nhap, in ra va dem xem co bao nhieu ki tu trong xau chuoi ki tu
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
//strlen(c): chi ra cho ban cai xau nay co bao nhieu ki tu
int main (){
	char a[100] = "duong tuan du";
	char b[100] = {'a', 'b', 'c', 'd'};
	printf ("%s\n%s\n", a, b);
	printf ("%d", strlen(a));
}
//int main (){
	//char a[100];
	//scanf ("%s", a);
	//printf ("%s\n", a);
	//printf ("%d", strlen(a));
//}
