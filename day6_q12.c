#include<stdio.h>
int main(){

    int n;

    printf("Enter number :");
    scanf("%d",&n);

    if(n>=0){
        if(n==0){
            printf("\nThe number is zero");
        }
        else {
            printf("\nThe number is positive");
        }
    } 

        else{
            printf("The number is negative");
        }


        return 0;
        
    }



