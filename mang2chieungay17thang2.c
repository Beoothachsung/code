#include <stdio.h>
#include <math.h>
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
	printf ("\nNhap vao sh, sc: ");
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
int Ktra (int x){ //ktra x neu la chinh phuong tra ve 1
	int b=(int)sqrt(x);
	return (x==b*b); //hoac co the viet if(x==b*b) return 1; else return 0;
}
void InsoCP(int a[][100], int sh, int sc){
	printf ("\nCac so chinh phuong trong mang: ");
	int x, y;
	for (x=0; x<sh; x++)
	for (y=0; y<sc; y++){
		if (Ktra(a[x][y])==1) printf ("%d  ", a[x][y]);
	}
}
void Sapxep(int a[][100], int sh, int sc){
	int x,y,z;
	for (x=0; x<sc;x++)//duyet qua cac cot
		for (y=0; y<sh-1; y++) //dungselection sort de sap xep tren tung cot
		for (z=y+1; z<sh; z++)
			if (a[y][x] <a[z][x]){
				int tam = a[y][x];
				a[y][x] = a[z][x];
				a[z][x] = tam;
			}
			printf ("\nMang sau khi sap xep la:\n");
			Hien (a, sh, sc);
}
int main (){
	int c, sh, sc, a[100][100];
	do{
		c=menu();
		switch (c){
			case 3: InsoCP(a, sh, sc);
			break;
			case 1:nhap(a, &sh, &sc);
			printf ("%d %d", sh, sc);
			break;
			case 2: Hien (a, sh, sc);
			break;
			case 4: Sapxep(a, sh, sc);
			break;
		}
	}while (c!=5);
}
