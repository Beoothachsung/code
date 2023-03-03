//btap:tim hang co nhieu so nguyen to nhat.
//cho ma tran co n hang, m cot, hay tim hang co nhieu so nguyen to nhat
//Input: dong dau tien la n, m. 1<=n, m<=100.
//N la dong tiep theo, moi dong co m so nguyen.
//Output:In ra hang co nhieu so nguyen to nhat va liet ke cac so nguyen to tren hang do.
//trong truong hop co cung so luong nguyen to thi in ra hang dau tien.
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
	int res = 0, hang;//res de luu ki luc, hang de luu chi so hang
	for (i=0; i<n; i++){
		int cnt = 0;//cnt: bien dem, su dung de dem xem hang thu i co bnh s nguyen to
		for (j=0; j<m; j++){
			if (nt(a[i][j])){
				++cnt;
			}
		}
		if (cnt>res){//neu cnt > ki luc res thi gans res=cnt va cap nhat hang=i
			res = cnt;
			hang = i;
		}
	}
	printf ("%d\n", hang+1);//hang+1 la do de bai bat dau hang o so 1 ma tren vong for cho i=0
	for (i=0; i<m; i++){
		if (nt(a[hang][i]))
			printf ("%d ", a[hang][i]);
	}
}
