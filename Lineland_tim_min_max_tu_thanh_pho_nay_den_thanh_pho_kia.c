//btap: Lineland
//tat ca cac thanh pho cua lineland deu nam tren truc toa do Ox. Do do, moi thanh pho duoc lien ket voi
//vi tri xi-toa do tren truc Ox. Khong co 2 thanh pho duoc dat tai mot diem. Cu dan lineland thich gui
//thu cho nhau. Mot nguoi chi co the gui thu neu nguoi nhan song o thanh pho khac. 
//Chi phi gui chinh xac = khoang cach giua thanh pho cua nguoi gui va thanh pho cua nguoi nhan
//Doi voi moi thanh pho, hay tinh 2 gia tri mini va maxi (trong do, mini la chi phi toi thieu de gui thu
//tu thanh pho thu i den mot thanh pho khac va maxi la chi phi toi da de gui thu tu thanh pho thu i den
//mot thanh pho khac).
#include <stdio.h>
int min (int a, int b){
	return a < b ? a : b;
}
int max (int a, int b){
	return a > b ? a : b;
}
int main (){
	int n;
	printf ("Moi ngai Tuan Du dep trai nhap so thanh pho: ");
	scanf ("%d", &n);
	int i, a[n];
	for (i=0; i<n; i++){
		scanf ("%d", &a[i]);
	}
	for (i=0; i<n; i++){//note: luon dung so lon tru di so be de khong phai dung abs
		if (i==0){//TH1:thanh pho la thanh pho dau tien: khong co thanh pho dung truoc
			printf ("%d %d\n", a[1]-a[0], a[n-1]-a[0]);//mini=khoang cach tu thanh pho thu nhat cho den thanh pho thu 0
		}//maxi=thanh pho cuoi cung cho den thanh pho dau tien(thu 0)
		else if (i==n-1){//TH2:thanh pho la thanh pho cuoi cung: khong co thanh pho dung sau
			printf ("%d %d\n", a[n-1]-a[n-2], a[n-1]-a[0]);//mini=no voi thang dung ngay truoc no
		}//maxi= no cho toi thanh pho dau tien 
		else printf ("%d %d\n", min(a[i]-a[i-1], a[i+1]-a[i]), max (a[i]-a[0], a[n-1]-a[i]));//TH3:thanh pho khong phai can dau va can cuoi
	}//mini:xet giua: thanh pho hien tai va dung truoc no & thanh pho hien tai va dung sau no
}//maxi: xet giua: thanh pho hien tai va thanh pho dau tien & thanh pho hien tai va thanh pho cuoi cung
