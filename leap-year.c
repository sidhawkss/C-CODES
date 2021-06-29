#include <stdio.h>

float leap(float year){
    int result;
    result = year /4;
    if((year / 4 ) == (int)result && (year / 100) != (float)result){
        printf("Leap year");    
    }else{
        printf("Not leap year");
    }
    return 1;
}
int main(void){
    float year;
    printf("Type a year to know if it's a leap year: ");
    scanf("%f", &year);
    bissexto(year);
    return 0;
}

