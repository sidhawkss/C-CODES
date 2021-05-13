#include <stdio.h>
#include <stdlib.h>

int main () 
{
    float note1=0, note2=0, note3=0, note4=0,average=0;
    printf("__________School average 1.0__________\n");
    printf("| Input your 1 note bimonthly: ");
    scanf("%f", &note1);
    printf("| Input your 2 note bimonthly: ");
    scanf("%f", &note2);
    printf("| Input your 3 note bimonthly: ");
    scanf("%f", &note3);
    printf("| Input your 4 note bimonthly: ");
    scanf("%f", &note4);
    average = (note1 + note2 + note3 + note4) / 4;
    printf("| Your school avarage that year was: %4.2f\n", average);

    if(average >= 5) 
    {
        printf("\t ___________________\n");
        printf("\t| You were approved |\n");
    }else{
        printf("=\tYou were disapproved");
    }

    return 0;
};