//btap:Ve xem phim
//Bo phim "Die Hard" moi vua duoc phat hanh! Co n nguoi tai phong ve rap chieu phim dung thanh 1 hang lon.
//Moi nguoi trong so ho co 1 hoa don 100, 50 hoac 25 rup. Mot ve "Die Hard" co gia 25 rup.
//Nhan vien dat phong co the ban ve cho moi nguoi va tra tien thua neu ban dau anh ta khong co tien va 
//ban ve theo dung thu tu moi nguoi trong hang hay khong?
#include <stdio.h>
int check (int a[], int n){
	int c25 = 0, c50 = 0;//dem xem co bao nhieu to 25 va 50 rup
	int i;
	for (i=0; i<n; i++){
		if (a[i] == 25){//TH1:nguoi mua hang dua to 25 rup
			++c25;//chi can tang so to 25 rup ma anh nhan vien co len
		}
		else if (a[i] == 50){//TH2:nguoi mua hang dua to 50 rup
			if (c25 == 0) return 0;//neu khong co to 25 rup nao thi return 0 luon, khong the ban hang cho ong nay
			--c25;//neu da co to 25 rup roi thi giam to 25 rup di 
			++c50;//va tang so luong to 50 rup len
		}
		else {//TH3:Truong hop ma nguoi khach dua to 100 rup. Se co 2 truong hop xay ra:
			if (c25 == 0 || (c25*25+c50*50<75))//khong co to 25 rup nao hoac so tien anh nhan vien dang co <75
			return 0;//thi se return 0 luon
			if (c50 != 0){//Neu co to 50 rup
				--c25;//thi tra lai 1 to 25 rup va 1 to 50 rup
				--c50;//khi do se giam di so luong to 25 va 50 rup cua anh nhan vien
			}
			else {//Con neu khong co to 50 rup(c50=0)
				c25 -= 3;//thi khi do anh ta phair tra = 3 to 25 rup
			}
		}
	}
	return 1;//anh ta da duyet qua tat ca cc nguoi mua hang va nguoi nao anh ta cung tra duoc tien
}//thi se return 1.
int main (){
	int n;
	printf ("Moi ngai Tuan Du dep trai nhap so khach hang tra tien: ");
	scanf ("%d", &n);
	int i, a[n];
	for (i=0; i<n; i++){
		scanf ("%d", &a[i]);
	}
	if (check(a, n)) printf ("YES");//goi ham check o tren, neu dung in ra YES
	else printf ("NO");//neu khong dung thi in ra NO.
}
