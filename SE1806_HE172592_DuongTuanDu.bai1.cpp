l#include<stdio.h>
#include<math.h>
int main() {
    int a, b, c;
    float cv, p, s;
    printf("Nhap canh thu nhat: ");
    scanf("%d", &a);    
    printf("Nhap canh thu hai: ");
    scanf("%d", &b);        
    printf("Nhap canh thu ba: ");
    scanf("%d", &c);  
    if(a+b>c && a+c>b && b+c>a)
 { printf("LA TAM GIAC\n");
  cv=a+b+c;
  printf("Chu vi cua tam giac la %f\n", cv);
  p=cv/2;
  s=sqrt(p*(p-a)*(p-b)*(p-c));
  printf("Dien tich tam giac la %f\n", s);
 }
 else printf("KHONG LA TAM GIAC");
 return 0;
}
    	   

