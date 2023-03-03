#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
    char string[51];
    printf("Nhap chuoi can kiem tra: ");
    fgets(string, 51, stdin);
    int length = strlen(string) - 1;
    int doixung = 1;int i;
    for (i = 0; i < length / 2; i++) {
        if (string[i] != string[length - i - 1]) {
            doixung = 0;
            break;
        }
    }

    if (doixung) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

