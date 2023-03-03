#include <stdio.h>
#include <stdlib.h>
//pass by value
//pass bt reference
void tang1 (int n){
	n+=100;
}
void tang2 (int *a){//ham tang2 co tham so la 1 con tro kieu int co ten la a.
	*a+=100;//*a o day la toan tu giai tham chieu
}
int main (){
	int a=300;
	tang1(a);
	printf ("Gia tri cua bien a sau khi ham tang 1 ket thuc: %d\n", a);
	tang2(&a);
	printf ("Gia tri cua bien a sau khi ham tang 2 ket thuc: %d\n", a);
	return 0;
}
