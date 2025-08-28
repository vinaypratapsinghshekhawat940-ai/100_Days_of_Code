#include<stdio.h>
int main(){
    int n;

    printf("Enter number :");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("the number is Even");
    }
    else 
    {
        printf("The number is Odd");
    }

    return 0;
    
}