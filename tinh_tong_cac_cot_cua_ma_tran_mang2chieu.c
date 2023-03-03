//btap: tinh tong cac cot cua ma tran
//cho ma tran co n hang, m cot, tinh tong cac phan tu cua tung cot
//Input: dong dau tien la n, m. 1<=n, m<=100
//N la dong tiep theo, moi dong co m so nguyen.
//Output: in ra tong cac phan tu cua tung cot.
#include <stdio.h>
int main (){
		int n, m;
		scanf ("%d%d", &n, &m);
		int i, j;
		int a[n][m];
		for (i=0; i<n; i++){
			for (j=0; j<m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		for (i=0; i<m; i++){//chuyen i o day thanh chi so cot
			int sum = 0;
			for (j=0; j<n; j++){//j chuyen thanh chi so hang
				sum+=a[j][i];
			}
			printf ("%d\n", sum);
		}
}
