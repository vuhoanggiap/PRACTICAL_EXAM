#include <stdio.h>

int main(){
	char c[100],c2[100];
	int i,j;
	int dem = 0;
	printf("Please enter the first string: ");
	scanf("%s",&c);

	printf("Please enter the seccond string: ");
	scanf("%s",&c2);

	for (i = 0; c[i] != '\0'; i++) {
        for (j = 0; c2[j] != '\0'; j++) {
            if (c[i] == c2[j]) {
                printf("Yes");
                dem = 1;
                break; 
            }
        }
        if (dem) break;
    }

    if (!dem) {
        printf("No");
    }

    return 0;
}
	


