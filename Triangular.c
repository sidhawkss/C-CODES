#include <stdio.h>

int main(void)
{
    int f1, f2, f3, r = 0, number = 0;
    printf("Type number to know if  it is triangular: \n");
    scanf("%d", &number);
    if(r = number < 6){
        printf("Not - Triangular");
    }
    for(f1 = 1, f2 = 2, f3 = 3; f1 < f2 < f3 && ((f1 * f2 * f3) < number + 1); ++f1, ++f2, ++f3){
        if(f1* f2 * f3 == number){
            printf("\n%d - Triangular", number);
            break;
        }else{
            //printf("%d / %d / %d\n", f1,f2,f3);
            printf("\nNot - Triangular");
        }
    }


    return 0;
}