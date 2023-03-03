//Assignment ban quyen Tuan Du(Beoo): Viet phuong trinh hien thi va thuc hien menu:
//1.Nhap 1 mang va viet ra gia tri trung binh cua tat ca cac so trong nay. Tim ra vi tri cua so lon nhat 
//trong mang.
//2.Nhap 1 chuoi va daonguoc chuoi nay. In ra chuoi co doi xung hay khong. In ra cos bao nhieu ki tu so 
//trong chuoi.
//3.Nhap ten tep ex a.txt mo v doc noi dung, neu tep hoan toan la so, hay tim so lon nhat va viet tep
//ex b.txt ra.
//4.Loi ra.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void printMenu();
void trungbinhvaMAX();
void daonguocchuoi();
void teptoidavaghivaotep();

int main(){
    int choice;
    do {
        printMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                trungbinhvaMAX();
                break;
            case 2:
                daonguocchuoi();
                break;
            case 3:
                teptoidavaghivaotep();
                break;
            case 4:
                printf("thoat...\n");
                exit(0);
            default:
                printf("Lua chon khong hop le. Xin vui long thu lai\n");
                break;
        }
    } while (1);
}

void printMenu(){
    printf("\n\nMenu cua ngai Tuan Du(Beoo):\n");
    printf("1. Tim gia tri trung binh va gia tri lon nhat trong mot mang\n");
    printf("2. Dao nguoc mot chuoi va kiem tra xem no co doi xung hay khong\n");
    printf("3. Tim gia tri toi da trong mot tep va ghi vao tep khac\n");
    printf("4. Thoat\n");
    printf("Moi ban chon: ");
}

void trungbinhvaMAX(){
    int n, i;
    float sum = 0, trungbinh, max;
    printf("\nMoi ngai Tuan du nhap so phan tu cua mang: ");
    scanf("%d", &n);
    float a[n];
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu %d: ", i+1);
        scanf("%f", &a[i]);
        sum += a[i];
        if (i == 0 || a[i] > max) {
            max = a[i];
        }
    }
    trungbinh = sum / n;
    printf("Gia tri trung binh cua mang: %f\n", trungbinh);
    printf("Gia tri lon nhat cua mang: %f\n", max);
}

void daonguocchuoi(){
    char str[100];
    printf("\nMoi ngai Tuan du nhap mot chuoi: ");
    scanf("%s", str);
    int doDai = strlen(str);
    char chuoiDaoNguoc[doDai+1];
    int i, j;
    for (i = doDai-1, j = 0; i >= 0; i--, j++) {
        chuoiDaoNguoc[j] = str[i];
    }
    chuoiDaoNguoc[doDai] = '\0';
    printf("Dao nguoc chuoi: %s\n", chuoiDaoNguoc);
    if (strcmp(str, chuoiDaoNguoc) == 0) {
        printf("Chuoi la doi xung.\n");
    } else {
        printf("Chuoi khong doi xung.\n");
    }
    int soluongChuSo = 0;
    for (i = 0; i < doDai; i++) {
        if (isdigit(str[i])) {
            soluongChuSo++;
        }
    }
    printf("So luong chu so trong chuoi: %d\n", soluongChuSo);
}
void teptoidavaghivaotep(){
    char tenTep1[100], tenTep2[100], buffer[100];
    printf("\nNhap ten tep dau vao: ");
    scanf("%s", tenTep1);
    printf("Nhap ten tep dau ra: ");
    scanf("%s", tenTep2);
    FILE *tepVao, *tepRa;
    tepVao = fopen(tenTep1, "r");
    if (tepVao == NULL) {
        printf("Loi khi mo tep dau vao.\n");
        return;
    }
    tepRa = fopen(tenTep2, "w");
    if (tepRa == NULL) {
        printf("Loi khi mo tep dau ra.\n");
        fclose(tepVao);
        return;
    }
    float max = -INFINITY;
    int laSo = 1;
    while (fgets(buffer, sizeof(buffer), tepVao)) {
        char *ptr = buffer;
        while (*ptr != '\0') {
            if (!isdigit(*ptr) && !isspace(*ptr)) {
                laSo = 0;
                break;
            }
            ptr++;
        }
        if (laSo) {
            char *endptr;
            float so = strtof(buffer, &endptr);
            if (*endptr == '\n' || *endptr == '\0') {
                if (so > max) {
                    max = so;
                }
            } else {
                laSo = 0;
            }
        }
    }
    if (laSo) {
        fprintf(tepRa, "%f\n", max);
        printf("Gia tri lon nhat trong tep: %f\n", max);
    } else {
        printf("Tep dau vao chua du lieu khong phai la so.\n");
    }
    fclose(tepVao);
    fclose(tepRa);
}

