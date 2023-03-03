#include <stdio.h>
#include <stdlib.h>
int main (){
	int a=300;
	int *ptr;//day la 1 con tro kieu int: khai bao
	//khoi tao gia tri cho con tro
	ptr = &a; //&
	printf ("Dia chi cua bien a: %d\n", &a);
	printf ("Gia tri cua con tro prt:%d\n", ptr);
	
	printf ("Gia tri cua bien a: %d\n", a);
	printf ("Gia tri cua bien ma con tro prt dang quan ly: %d\n", *ptr);
	
	*ptr = 1000; //tuong ung voi a = 1000
	printf ("Gia tri cua bien a: %d\n", a);
	printf ("Gia tri cua bien ma con tro prt dang quan ly: %d\n", *ptr);
	
	return 0;
}
