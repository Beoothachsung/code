#include<stdio.h>
void Nhap(int a[],int slpt){
	int i;
	for(i=0;i<slpt; i++)
		scanf("%d",&a[i]);
}
void Hien(int a[],int slpt){
	int i;
	for(i=0;i<slpt;i++){
		printf("%d ",a[i]);
		if(i<slpt-1) printf(",");  // khong hien thi dau , sau cuoi phan tu cua mang
	}
}
int CheckSymmetric(int a[],int slpt){
	int i=0,j=slpt-1;
	while(i<=j){
		if(a[i]== a[j]){
			i++;  j--;
		}
		else return(0);
	}
	return(1);
}
int main(){
	int n, a[20]; //de nhap n thoa man n<20
	do{
		scanf("%d",&n);
	}while(n>=20);
	printf("\nNhap vao %d phan tu mang:  ",n);
	Nhap(a,n);
	printf("\nOUTPUT:\n");
	printf("array={");
	Hien(a,n);
	if(CheckSymmetric(a,n)==1) printf("},symmetric");
	else printf("},asymmetric");
}

