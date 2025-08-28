
#include<stdio.h>
#include<math.h>
int main (){
    float principal, rate, time;
    float si , ci , amount;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);
    si = (principal * rate * time) / 100;
    ci = principal * pow((1 + rate / 100), time) - principal;
    amount = principal + si;
    printf("Simple Interest: %.2f\n", si);
    printf("Compound Interest: %.2f\n", ci);
    printf("Total Amount (SI): %.2f\n", amount);
   }