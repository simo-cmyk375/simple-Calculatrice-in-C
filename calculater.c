//CALCULATER V1
#include <stdio.h>
#include <math.h>
int main(){
    float num1=0;
    float num2=0;
    float total=0;
    char opperator='\0';
    printf("enter your first nb: ");
    scanf("%f",&num1);
    printf("enter your operator (+,-,/): ");
    scanf(" %c",&opperator);//clear \n carachter from input buffer using ' 'befor the %c; 
    printf("enter your secound nb: ");
    scanf("%f",&num2);
    switch(opperator){
        case '+':
            total=num1 + num2;
            printf("the total of %.2f + %.2f is %.2f",num1,num2,total);
            break;
         case '-':
            total=num1 - num2;
            printf("the total of %.2f - %.2f is %.2f",num1,num2,total);
            break;
         case '/':
            if(num2==0){
                printf("you cant divide by 0 !!!");
            }
            else{
                total=num1 / num2;
            printf("the total of %.2f / %.2f is %.2f",num1,num2,total);
            }
            break;
        default:
            printf("incorrect opperator (+,-,/)");
    }
}