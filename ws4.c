//workshop 4: ban quyen Tuan du
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main (){
	printf ("MSSV: HE172592\n");
	printf ("Ho va ten: Duong Tuan Du\n");
// Nhap xau
    char str[201];
    printf("Moi quy ngai dep trai nhap Xau: ");
    fgets(str, sizeof(str), stdin);
// Chuan hoa xau
    int doDai = strlen(str);
    int i;
    for (i = 0; i < doDai; i++) {
        if ((str[i] == '.' || str[i] == ':') && i+1 < doDai && isalpha(str[i+1])) {
            str[i+1] = toupper(str[i+1]);
        }
        if (isspace(str[i]) && i+1 < doDai && isspace(str[i+1])){
            memmove(&str[i], &str[i+1], doDai-i);
            doDai--;
            i--;
        }
        if ((str[i] == ',' || str[i] == '.' || str[i] == ':' || str[i] == ';') && i+1 < doDai && !isspace(str[i+1])){
            memmove(&str[i+2], &str[i+1], doDai-i);
            str[i+1] = ' ';
            doDai++;
        }
        if ((str[i] == ',' || str[i] == '.' || str[i] == ':' || str[i] == ';') && i-1 >= 0 && isspace(str[i-1])) {
            memmove(&str[i-1], &str[i], doDai-i);
            doDai--;
            i--;
        }
    }
//Dem so tu va so dau cau
    int soTu = 0, soDauCau = 0;
    for (i = 0; i < doDai; i++) {
        if (isalnum(str[i])) {
            while (isalnum(str[i]) && i < doDai){
                i++;
            }
            soTu++;
            i--;
        } else if (ispunct(str[i])){
            soDauCau++;
        }
    }
    printf("So tu: %d\n", soTu);
    printf("So dau cau: %d\n", soDauCau);
// In ra cac tu hoan toan la so co <= hon 4 chu so
    printf("Cac tu hoan toan la so co <= 4 chu so: ");
    for (i = 0; i < doDai; i++){
        if (isdigit(str[i])){
            char num[5] = "";
            int j = 0;
            while (isdigit(str[i]) && j < 4){
                num[j] = str[i];
        		j++;
        		i++;
    		}
    		if (j < 5 && (isspace(str[i]) || ispunct(str[i]) || i == doDai)){
        		int chuSo = atoi(num);
        		if (chuSo <= 10000){
            	printf("%d ", chuSo);
        		}
    		}
		}
	}
	return 0;
}
