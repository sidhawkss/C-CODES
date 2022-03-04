#include <stdio.h>
int main(void){
    int i,vector[10], bigger, smaller;
    printf("Type the 10 numbers of vector: \n");
    for(i=0; i<10; i++){
        scanf("%d", &vector[i]);
    }
    for(i=0; i<10; i++){
        if(i==0){
            bigger=vector[i];
            smaller=vector[i];   
        }
        if(vector[i]> bigger){
            bigger=vector[i];
        }
        if(vector[i] < smaller){
            smaller=vector[i];
        }
    }
    printf("Bigger - %d\n", bigger);
    printf("Smaller - %d\n", smaller);

    return  0;
}