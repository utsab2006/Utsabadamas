#include <stdio.h>

int main() {
    int i, j;
    int num = 1;

    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= 3; j++) {

            if(i == 1)     // 1st row
                printf("%d ", num++);
            
            else if(i == 2) {  // 2nd row
                if(j == 1) printf("8 ");
                else if(j == 2) printf("9 ");
                else printf("4 ");
            }

            else {           // 3rd row
                if(j == 1) printf("7 ");
                else if(j == 2) printf("6 ");
                else printf("5 ");
            }
        }
        printf("\n");
    }

    return 0;
}