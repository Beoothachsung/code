#include <stdio.h>
int nhap (){
	int x;
	do{
		scanf ("%d", &x);
	}while (x<=0);
	return (x);//tr ve gia tri duoc nhap tu ban phim thong qua ten ham
}
int UCLN(int a, int b);
int BCNN(int a, int b);
int main (){
	int a, b;
	a = nhap();
	b = nhap();
	printf ("\nUoc chung lon nhat cua %d vs %d la %d",a ,b, UCLN(a,b));
	printf ("\nBoi chung nho nhat cua %d vs %d la %d",a ,b, BCNN(a,b));
}
int UCLN(int a, int b){
	if(a==b)return(a);
	else{
		if(a>b)return(UCLN(a-b,b));//loi doi de quy
		else   return(UCLN(a,b-a));//UCLN la de quy
	}
}
int BCNN(int a, int b){
	return(a*b/UCLN(a,b));
}
