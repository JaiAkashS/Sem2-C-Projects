#include<stdio.h>
void celsius(float a);
void fahrenheit(float a);
int main(){
    int n;
    float temp;
    printf("Enter your Choice\n1.Celsius to Fahrenheit\n2.Fahrenheit to Celsius\nEnter:");
    scanf("%d",&n);
    printf("Enter Temperature:");
    scanf("%f",&temp);
    if(n==1){
        celsius(temp);
    }
    else{
        fahrenheit(temp);
    }
    return 0;
}
void celsius(float a){
    //1.8*c=32
    float f;
    f=1.8*a+32;
    printf("Temperature:%.1f F",f);
}
void fahrenheit(float a){
    //(f-32)*0.56
    float c;
    c=(a-32)*0.56;
    printf("Temperature:%.1f C",c);
}