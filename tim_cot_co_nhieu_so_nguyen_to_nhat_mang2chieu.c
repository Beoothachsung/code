//btap:tim cot co nhieu so nguyen to nhat.
//cho ma tran co n hang, m cot, hay tim hang co nhieu so nguyen to nhat
//Input: dong dau tien la n, m. 1<=n, m<=100.
//N la dong tiep theo, moi dong co m so nguyen.
//Output:In ra cot co nhieu so nguyen to nhat va liet ke cac so nguyen to tren cot do.
//trong truong hop co cung so luong nguyen to thi in ra cot dau tien.
#include <stdio.h>
#include <math.h>
int nt(int n){
	int i;
	for (i=2; i<=sqrt(n); i++){
		if (n%2==0)
			return 0;
	}
	return n>1;
}
int main (){
	int n, m;
	scanf ("%d%d", &n, &m);
	int a[n][m];
	int i, j;
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			scanf ("%d", &a[i][j]);
		}
	}
	int res = 0, cot;
	for (i=0; i<m; i++){
		int cnt = 0;
		for (j=0; j<n; j++){
			if (nt(a[j][i])) ++cnt;//do chuyen i thanh cot, j thanh hang
		}
		if (cnt > res){
			res = cnt;
			cot = i;
		}
	}
	printf ("%d\n", cot+1);
	for (i=0; i<n; i++){
		if (nt(a[i][cot]))
			printf ("%d ", a[i][cot]);
	}
}
