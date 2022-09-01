#include <stdio.h>

int main(void){
    int num, store, sum, cubes;

    printf("Enter your number:");
    scanf("%d", &num);

    while (num>0){
        store=num%10; //modulus of the number to find the remainder
        num/=10;
        cubes=store*store*store;
        //printf("\n%d", cubes);
        sum+=cubes;
    }
    
    printf("\nSum of the cubes of the digits is %d", sum);
    return 0;
}
