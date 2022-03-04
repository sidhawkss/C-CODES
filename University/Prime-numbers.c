#include <stdio.h>
int main(void)
{
    int number= 0, counter =0, x = 0,  result= 0;

    printf("Verify prime number: ");
    scanf("%d", &number);
    for(x = 2; x <= number / 2; ++x){
        if(number % x == 0 ){
            result++;
            break;
        }
    }
    
    if (result == 0)
        printf("%d Prime\n", number);
    else
        printf("%d Not Prime\n", number);


    return 0;
}