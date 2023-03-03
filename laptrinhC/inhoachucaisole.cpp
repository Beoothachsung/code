#include <stdio.h>
int main (){
	char s[101];
	gets(s);
	printf ("\nOUTPUT:\n");
	int i;
	for (i=0; s[i] != '\0'; i++){
		if (i % 2 == 1){
			if (s[i]>='a' && s[i]<='z')
				s[i] -= 32;
		}
	}
	puts(s);
	printf ("\n");
	return 0;
}
