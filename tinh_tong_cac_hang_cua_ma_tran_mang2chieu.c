//btap: tinh tong cac hang cua ma tran
//cho ma tran co n hang, m cot, tinh tong cac phan tu cua tung hang
//Input: dong dau tien la n, m. 1<=n, m<=100
//N la dong tiep theo, moi dong co m so nguyen.
//Output: in ra tong cac phan tu cua tung hang.
#include <stdio.h>
int main (){
	int n, m;
	scanf ("%d%d", &n, &m);
	int i, j;
	int a[n][m];
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			scanf ("%d", &a[i][j]);
		}
	}
	for (i=0; i<n; i++){
		//duy qua cac phan tu o hang i va tinh tong
		int sum = 0;
		for (j=0; j<m; j++){
			sum += a[i][j];
		}
		printf ("%d\n", sum);
	}
}

