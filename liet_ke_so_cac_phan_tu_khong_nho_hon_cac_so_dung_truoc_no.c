//btap: so khong nho hon so dung truoc
//cho mot day so nguyen duong co n phan tu. Hay liet ke so cac phan tu trong day khong nho hon cac so dung 
//dung truoc no (tinh ca phan tu dau tien).
#include <stdio.h>
int main (){
	int n;
	scanf ("%d", &n);
	int i, j;
	int a[n];
	for (i=0; i<n; i++){
		scanf ("%d", &a[i]);
	}
	for (i=0; i<n; i++){
		int ok=1;
		for (j=0; j<i; j++){//a[j]: la cac so dung truoc, a[i]: la cac so dung sau
			if(a[j]>a[i]){//Neu co bat ki 1 so dang truoc nao lon hon so dang sau thi ok se bang 0 và break
				ok=0;
				break;
			}//con neu sau vong for, ok van =1 thi no da duyet tat ca cac phan tu dung truoc no roi nhung
		}// ma khong thay thang nao lon hon no, nghia la no da thoa man dieu kien de bai.
		if(ok) printf ("%d ", a[i]);
	}
}
//cach 2: #include <stdio.h>
//int main (){
	//int n;
	//scanf ("%d", &n);
	//int i, j;
	//int a[n];
	//for (i=0; i<n; i++){
		//scanf ("%d", &a[i]);
	//}
	//int max=a[0];
	//for (i=0; i<n; i++){
		//if (a[i]>=max){
			//printf ("%d", a[i]);
		//}
		//if (a[i]>max) max = a[i];
	//}
//} da giai thich chi tiet cach 2 trong vo o bai 3 phan bai tap mang 1 chieu
