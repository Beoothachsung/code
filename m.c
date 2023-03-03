#include <stdio.h>
int menu(){
	int c;
	printf ("\n1. Nhap ma tran ");
	printf ("\n2. Hien ma tran ");
	printf ("\n3. Tim so chinh phuong ");
	printf ("\n4. sap xep tren cot ");
	printf ("\n5. thoat");
	printf ("\nMoi nhap lua chon: ");
	scanf ("%d", &c);
	return c;
}
void nhap (int a[][100], int *sh, int *sc){
	int x, y;
	scanf ("%d%d", sh, sc);//khong can dau & trong scanf vi con tro chinh la mot dia chi
	for (x=0; x< *sh; x++)
	for (y=0; y< *sc; y++){
		printf ("\nNhap a[%d][%d]= ", x, y);
		scanf ("%d", &a[x][y]);
	}
}
void Hien (int a[][100], int sh, int sc){
	
	int x, y;
	for (x=0; x<sh; x++){ //duyet tung dong
		for (y=0; y<sc; y++)   //in ra cac phan tu trong dong do
			printf ("%d\t", a[x][y]);//\t lui vao 1 tab
		printf ("\n");//xuong dong de in dong moi
	}
}
int main (){
	int c, sh, sc, a[100][100];
	do{
		c=menu();
		switch (c){
			case 1:nhap(a, &sh, &sc);
				break;
			case 2: Hien (a, sh, sc);
			break;
		}
	}while (c!=5);
}
