#include<stdio.h>
#include<math.h>
int main(){
    int num1,num2,ch;
    float result;
    printf("Enter Num1:");
    scanf("%d",&num1);
    printf("Enter Num2:");
    scanf("%d",&num2);

    printf("MENU\n1.Addtion\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exponentiation\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:{
            result=num1+num2;
            break;}
        case 2:{
            result=num1-num2;
            break;}
        case 3:{
            result=num1*num2;
            break;}
        case 4:{
            result=num1/num2;
            break;}
        case 5:{
            result=pow(num1,num2);
            break;}
        default:{
            printf("Incorrect Choice");
            break;
        }
        }
    }
    printf("Result:%f",result);
    return 0;
}