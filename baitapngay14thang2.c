#include<stdio.h>
int Menu(){
 int userChoice;
 printf("\n1.Nhap mang: ");
 printf("\n2.Hien mang: ");
 printf("\n3.Sap xep Bubble sort mang: ");
 printf("\n4.Xoa 1 phan tu = x trong mang: ");
 printf("\n5.Xoa toan bo phan tu x trong mang: ");
 printf("\n Moi chon chuc nang 1-5 Nhap so khac de thoat: ");
 scanf("%d",&userChoice);
 return(userChoice);
}
int Add(int a[],int n,int value){ // them phan tu value vao cuoi mang a
 if(n>=100) printf("\nMang day, 0 them dc nua");
 else{
 a[n]=value;
 n++;
 }
 return n;
}
void Hien_mang(int a[], int n){
 int i;
 for( i=0; i<n; i++)
 printf("%d  ",a[i]);
}
void Bubble_Sort(int a[],int n){
 int i,j;
 for(i=0; i<n-1; i++)
 for(j=n-1; j>i; j--)// sx giam
 if(a[j]>a[j-1]){
 int tam=a[j];
 a[j]=a[j-1];
 a[j-1]=tam;
 }
}
int Xoa(int a[],int n, int x){
 int i,pos=-1;
 for(i=0;i<n;i++)
 if(a[i]==x) pos=i; // tim thay
 if(pos<0) printf("\nKhong tim thay %d",x);
 else{
 for(i=pos; i<n-1; i++)
 a[i]=a[i+1];
 n--;
 }
 return(n);
}
int XoaToanBo(int a[], int n, int x){
    int i, k = 0;
    for(i=0; i<n; i++){
        if(a[i] != x){
            a[k] = a[i];
            k++;
        }
    }
    return k;
}
int main(){
 int a[100],n=0, choice, value,x; //n= slpt, choice de chon chuc nang, value nhan phan tu mang
 do{
 choice=Menu();
 switch(choice){
 case 1:
 printf("\nNhap cac phan tu mang toi khi =0 thi dung: ");
 do{
 scanf("%d",&value);
 n=Add(a,n,value);
 }while(value!=0);
 break;
 case 2:
 Hien_mang(a,n);
 break;
 case 3:
 Bubble_Sort(a,n);
 printf("\nMang sau khi sap xep la:");
 Hien_mang(a,n);
 break;
 case 4:
 printf("\nNhap so can xoa x= ");
 scanf("%d",&x);
 n=Xoa(a,n,x);
 printf("\nMang sau khi XOA la:");
 Hien_mang(a,n);
 break;
  case 5:
    printf("\nNgai Tuan Du da XOA het toan bo phan tu trong mang!\n ");
    n=XoaToanBo(a,n,x);
    break;
 }
 }while(choice>0 && choice <=5);
}
