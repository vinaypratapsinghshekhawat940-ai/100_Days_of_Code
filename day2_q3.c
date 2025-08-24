#include<stdio.h>
int main(){

    int l,b,area,perimeter;
    
    printf("enter length");
    scanf("%d",&l);

    printf("enter breath");
    scanf("%d",&b);

    area = l*b;
    perimeter = 2*(l+b);

    printf("The Area is %d",area);

    printf("\nThe Perimeter is %d",perimeter);

    return 0;

}