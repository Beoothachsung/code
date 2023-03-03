#include<stdio.h>
#include<math.h>

void nhap(int a[], int slpt){
    int i;
    printf("Nhap cac phan tu cua mang: ");
    for (i = 0; i < slpt; i++){
        scanf("%d", &a[i]);
    }
}

void in(int a[], int slpt){
    int i;
    printf("Mang vua nhap: ");
    for (i = 0; i < slpt; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
int sohoanhao(int x){
    int sum = 0, i;
    for (i = 1; i < x; i++){
        if (x % i == 0){
            sum += i;
        }
    }
    if (sum == x) return 1;
    else return 0;
}

void inSoHH(int a[], int slpt){
    int i, kiemtra = 0;
    for (i = 0; i < slpt; i++){
        if (sohoanhao(a[i]) == 1){
            kiemtra = 1;
        }
    }
    if(kiemtra == 0) printf("Trong mang khong co so hoan hao\n");
    else{
    	printf("Cac so hoan hao cua mang: ");
    	for (i = 0; i < slpt; i++){
    		if (sohoanhao(a[i]) == 1){
    			printf("%d ", a[i]);
			}
		}
	}
	printf("\n");
}

void timx(int a[], int slpt){
    int i, x, check = 1;
    do {
        printf("\nNhap so x can tim: ");
        scanf("%d", &x);
        int flag = 0;
        for (i = 0; i < slpt; i++){
            if (a[i] == x){
                printf("So x o vi tri thu %d trong mang\n", i);
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            int min = abs(a[0] - x), vitri = 0;
            for(i = 0; i < slpt; i++){
                int tam = abs(a[i] - x);
                if (tam < min){
                    min = tam;
                    vitri = i;
                }
            }
            printf("Khong tim thay x\n");
            printf("Gia tri gan voi x nhat la %d o vi tri: %d\n", a[vitri], vitri);
        }
        printf("Ban co muon tim x khac khong? (1. Co 0. Khong) ");
        scanf("%d", &check);
    } while(check == 1);
}


int main(){
    int n;
    do{
        printf("Nhap vao so phan tu cua mang: ");
        scanf("%d",&n);
    } while(n < 3 || n > 20);
    int a[20];
    int choice;
    while (1){
        printf("\nMoi ban chon:\n");
        printf("1. Nhap vao cac phan tu cua mang\n");
        printf("2. Hien thi mang vua nhap\n");
        printf("3. In ra cac so hoan hao trong mang\n");
        printf("4. Tim 1 so x\n");
        printf("5. Thoat chuong trinh\n\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n");
            nhap(a,n);
            break;
        case 2:
            printf("\n");
            in(a,n);
            break;
        case 3:
            printf("\n");
            inSoHH(a,n);
            break;
        case 4:
            printf("\n");
         	timx(a,n);
            break;
        case 5:
        	printf("\nThoat chuong trinh");
        	return 0;
        	break;
		}
    }
    return 0;
}   
