#include<stdio.h>
int main(){

    int r,area,circumference;

    printf("Enter Radius :");
    scanf("%d",&r);

    area = 3.14 * (r*r);

    circumference = 2* 3.14 * r;

    printf("The Area is %d",area);

    printf("\nThe Circumference is %d",circumference);


    return 0;



}