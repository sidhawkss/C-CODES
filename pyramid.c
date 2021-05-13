#include <stdio.h>

int main(void){

    int x, y, rows;
    printf("Input a number of lines: ");
    scanf("%i", &rows);

    for(x = 1; x<= rows; ++x){
        printf("\n");
        for(y = rows; y >= x; --y){
            printf(" ");
        }
        for(y = 1; y<= x; ++y){
        printf("**");
        }
    }

    return 0;
}

