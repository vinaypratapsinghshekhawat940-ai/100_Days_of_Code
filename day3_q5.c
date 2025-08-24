#include<stdio.h>
int main(){

    float c,f;

    printf("Enter celsius :");
    scanf("%f",&c);

    f = c * 33.8;

    printf("The Celsius is %.2f",c);
    printf("\nThe fahrenheit is %.2f",f);

    return 0;

}