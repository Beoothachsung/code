#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
    char s1[] = "con coc trong hang, con coc nhay ra la con coc bi bat";
    char s2[] = "con coc";
    char s3[] = "chu ech con";
    char ketqua[1000] = "";
    int i, j, k, n, m, found;
    n = strlen(s1);
    m = strlen(s2);
    //dung strlen de tinh do dai chuoi ban dau va chuoi bi thay ra
    for (i = 0; i < n; ){
        found = 0;
        if (s1[i] == s2[0]){
            for (j = 1; j < m; j++){
                if (s1[i+j] != s2[j]){
                    found = 0;
                    break;
                }
                found = 1;
            }
            if (found){
                strcat(ketqua, s3);
                i += m;
            }
        }
        if (!found){
            strncat(ketqua, &s1[i], 1);
            i++;
        }
    }
    printf("Chuoi ban dau: %s\n", s1);
    printf("Chuoi bi thay: %s\n", s2);
    printf("Chuoi thay the: %s\n", s3);
    printf("Ket qua: %s\n", ketqua);
    return 0;
}
