#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_perfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int n, x, i, flag = 0, pos;
    char gt;
    do{
    	printf ("MENU (Moi ban chon):\n");
		float min_diff = INFINITY;
    	printf ("1.Nhap vao cac phan tu cua mang:\n");
    	scanf("%d", &n);
    	printf ("2.Hien thi mang vua nhap:\n");
    	int arr[n];
    	for (i = 0; i < n; i++) {
        	scanf("%d", &arr[i]);
        	if (is_perfect(arr[i])) {
            	printf ("3.In ra cac so hoan hao trong mang: %d\n", arr[i]);
        	}
    	}
    	printf ("Tim mot so x:\n");
    	printf("Nhap so x: ");
    	scanf("%d", &x);
    	for (i = 0; i < n; i++) {
        	if (arr[i] == x) {
            	flag = 1;
            	pos = i;
            	printf("So x tim thay tai vi tri thu %d\n", pos + 1);
        	}else {
        		float diff = fabs(x - arr[i]);
        		if (diff < min_diff){
        			min_diff = diff;
					pos = i;
				}
			}
		}
		if (flag == 0){
			printf("So x khong tim thay trong mang\n");
			printf("Gia tri gan x nhat la: %d tai vi tri %d\n", arr[pos], pos + 1);
		}
	}while (gt != 'x');
	return 0;
}
