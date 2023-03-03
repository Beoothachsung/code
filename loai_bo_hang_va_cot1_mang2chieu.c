//btap: Loai bo hang va cot 1
//cho ma tran co n hang, m cot, hay loai bo hang co tong lon nhat va cot co tong phan tu lon nhat khoi
//ma tran
//Input: Dong dau tien la so bo test T(1<=T<=100)
//Moi test case bao gom
//Dong dau tien la n, m. 1<=n, m<=100
//N la dong tiep theo, moi dong co m so nguyen.
//Output: In ra ma tran sau khi xoa hang va cot co tong cac phan tu lon nhat.
//VD: nhap input: 1      va se in ra     Output: #TC 1:
               // 3 3                            1  2
               // 1 2 3                          4  5
               // 4 5 6
               // 7 8 9
#include <stdio.h>
int main (){
	int t;
	scanf ("%d",&t);
	int i, j;
	for (i=1; i<=t; i++){
		int n, m;
		scanf ("%d%d", &n, &m);
		int a[n][m];
		for (i=0; i<n; i++){
			for (j=0; j<m; j++){
				scanf ("%d", &a[i][j]);
			}
		}
		//tim hang co tong cac phan tu lon nhat
		int res = -1e9, hang, cot;
		for (i=0; i<n; i++){
			int sum = 0;
			for (j=0; j<m; j++){
				sum += a[i][j];
			}
			if (sum>res){
				res = sum;
				hang = i;
			}
		}
		//tim cot co tong cac phan tu lon nhat
		res = -1e9;//phai ghi lai res=-1e9 o day vi neu khong thi bien res o tren dang luu hang co tong cac
		for (i=0; i<m; i++){//phan tu lon nhat trong cai vong for.
			int sum = 0;
			for (j=0; j<n; j++){
				sum += a[j][i];
			}
			if (sum>res){
				res = sum;
				cot = i;
			}
		}
		printf ("#TC %d:\n", t++);
		for (i=0; i<n; i++){
			if (i != hang){
				for (j=0; j<m; j++){
					if (j != cot){
						printf ("%d ", a[i][j]);
					}
				}
				printf ("\n");
			}
		}
	}
}
