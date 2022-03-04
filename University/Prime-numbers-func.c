#include <stdio.h>
float verify(int number){
    int cont = 0, x = 0, result = 0;
    for(x =2; x <= number /2; x++){
        if(number %x == 0 ){
            result ++;
            break;
        }
    }
    if (result == 0){
        printf("Number prime");
    }else {
        printf("Number not prime");
    }
    return 1;
}


int main(void){
    int number;
    printf("Verify prime number: ");
    scanf("%d", &number);
    verify(number);
    return 0;
}